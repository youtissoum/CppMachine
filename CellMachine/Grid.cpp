#include "Grid.h"

using namespace CellMachine;

Grid::Grid(const int width, const int height) {
	this->width = width;
	this->height = height;

	Cell(*this, PUSH, 0, 0);
}

Cell* Grid::getCell(const int x, const int y) {
	for (auto& cell : this->cells) {
		if (cell.x == x and cell.y == y) {
			return &cell;
		}
	}

	return nullptr;
}