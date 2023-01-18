#include "Cell.h"

using namespace CellMachine;

Cell::Cell(Grid& grid, CellType_e type, int x, int y)
	: parent(grid) {
	this->cellType = type;
	this->x = x;
	this->y = y;


	this->parent.cells.push_back(*this);
}