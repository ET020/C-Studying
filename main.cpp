#include <iostream>
#include "Graph.h"


int main(int argc, char** argv) {
	int ans = 0;
	auto grid = std::vector<std::vector<int>>(2, std::vector<int>(2));
	grid[0][0] = 1;
	grid[0][1] = 1;
	grid[1][0] = 3;
	grid[1][1] = 4;
	ans = Graph::countPaths(grid);
	std::cout << ans;
}



