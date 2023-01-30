#include "Grid.h"

using namespace CellMachine;

Grid::Grid(const int width, const int height) {
	this->width = width;
	this->height = height;
}

Cell* Grid::getCell(const int x, const int y) {
	for (auto& cell : this->cells) {
		if (cell->x == x and cell->y == y) {
			return cell;
		}
	}

	return nullptr;
}

void Grid::setCell(const CellMachine::CellType::CellType_e type, CellMachine::Direction::Direction_e dir, const int x, const int y) {
	Cell* addedCell = new Cell(*this, type, dir, x, y);

	this->deleteCell(x, y);

	this->cells.push_back(addedCell);
}

void Grid::deleteCell(const int x, const int y) {
	Cell* cellAtPosition = this->getCell(x, y);
	if (cellAtPosition != nullptr) {
		std::erase(this->cells, cellAtPosition);
		delete cellAtPosition;
	}
}