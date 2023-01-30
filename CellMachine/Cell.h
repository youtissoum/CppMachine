#pragma once
#include "CellType.h"
#include "Grid.h"
#include "Direction.h"
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
		CellMachine::Direction::Direction_e direction;

		Cell(Grid& grid, CellType::CellType_e type, CellMachine::Direction::Direction_e dir, int x, int y);

		std::pair<bool, bool> push(CellMachine::Direction::Direction_e dir, int bias);
	};
}
