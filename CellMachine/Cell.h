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
		CellMachine::CellType_e cellType;

		std::pair<int, int> position;

		Cell(CellMachine::Grid& grid, CellMachine::CellType_e type, std::pair<int, int> position);
	};
}
