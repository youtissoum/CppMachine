#include "Grid.h"

using namespace CM;

Grid::Grid(const int width, const int height) {
	this->width = width;
	this->height = height;
	
	this->cells.push_back(Cell(PUSH, std::make_pair(0, 0))); // For debugging
}