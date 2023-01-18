#pragma once
#include <vector>
#include "Cell.h"

namespace CM {
	class Grid
	{
		int width, height;
		std::vector<CM::Cell> cells;

		Grid(const int width, const int height);
	};
}
