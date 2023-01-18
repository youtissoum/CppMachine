#pragma once
#include "CellType.h"
#include <utility>

namespace CM {
	class Cell
	{
	public:
		CM::CellType_e cellType;

		std::pair<int, int> position;

		Cell(CM::CellType_e type, std::pair<int, int> position);
	};
}
