#include "Grid.h"

using namespace CellMachine;

Grid::Grid(const int width, const int height) {
	this->width = width;
	this->height = height;
	
	this->cells.push_back(Cell(*this, PUSH, std::make_pair(0, 0))); // For debugging
}