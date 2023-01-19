#include "Cell.h"
#include <algorithm>

#include <iostream>

using namespace CellMachine;

Cell::Cell(Grid& grid, CellType::CellType_e type, int x, int y)
	: parent(grid) {
	this->cellType = type;
	this->x = x;
	this->y = y;
}