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

void Grid::setCell(const CellMachine::CellType::CellType_e type, const int x, const int y) {
	Cell addedCell(*this, type, x, y);

	Cell* cellAtPosition = this->getCell(x, y);
	if (cellAtPosition != nullptr) {
		std::erase(this->cells, cellAtPosition);
	}

	this->cells.push_back(&addedCell);
}