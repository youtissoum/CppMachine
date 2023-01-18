#include "Cell.h"

using namespace CellMachine;

Cell::Cell(Grid& grid, CellType_e type, std::pair<int, int> position): parent(grid) {
	this->cellType = type;
	this->position = position;
}