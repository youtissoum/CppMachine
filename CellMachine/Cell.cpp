#include "Cell.h"
#include <iostream>

using namespace CellMachine;

Cell::Cell(Grid& grid, CellType::CellType_e type, Direction::Direction_e dir, int x, int y)
	: parent(grid) {
	this->cellType = type;
	this->direction = dir;
	this->x = x;
	this->y = y;
}

std::pair<bool, bool> Cell::push(Direction::Direction_e dir, int bias) {
	int targetX = this->x;
	int targetY = this->y;

	switch (dir) {
	case (Direction::RIGHT):
		targetX += 1;
		break;
	case (Direction::DOWN):
		targetY += -1;
		break;
	case (Direction::LEFT):
		targetX += -1;
		break;
	case (Direction::UP):
		targetY += 1;
		break;
	}

	if (targetX >= parent.width || targetY >= parent.height || targetX < 0 || targetY < 0 || bias < 1) {
		return std::make_pair(false, false);
	}

	Cell* cellAtLocation = parent.getCell(targetX, targetY);

	if (cellAtLocation == nullptr) {
		this->x = targetX;
		this->y = targetY;
		return std::make_pair(true, false);
	}
	std::pair<bool, bool> pushResult = cellAtLocation->push(dir, bias);
	// if it's a cell that deletes other cells
	if (pushResult.second) {
		parent.deleteCell(this->x, this->y);
		return std::make_pair(true, false);
	}
	if (pushResult.first) {
		this->x = targetX;
		this->y = targetY;
		return std::make_pair(true, false);
	}
	return std::make_pair(false, false);
}