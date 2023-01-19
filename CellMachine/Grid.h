#pragma once
#include <vector>
#include "Cell.h"

namespace CellMachine {
	class Cell;

	class Grid
	{
	public:
		int width, height;
		std::vector<CellMachine::Cell*> cells;

		Grid(const int width, const int height);

		CellMachine::Cell* getCell(const int x, const int y);
		void setCell(const CellMachine::CellType::CellType_e type, const int x, const int y);
	};
}
