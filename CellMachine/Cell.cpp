#include "Cell.h"

using namespace CM;

Cell::Cell(CellType_e type, std::pair<int, int> position) {
	this->cellType = type;
	this->position = position;
}