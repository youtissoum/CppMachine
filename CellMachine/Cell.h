#pragma once
#include "CellType.h"
#include "Grid.h"
#include <utility>

namespace CellMachine {
	class Grid;

	class Cell
	{
	protected:
		CellMachine::Grid& parent;

	public:
		int x, y;
		CellMachine::CellType::CellType_e cellType;

		Cell(CellMachine::Grid& grid, CellMachine::CellType::CellType_e type, int x, int y);
	};
}
