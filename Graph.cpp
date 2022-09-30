#include "Graph.h"

int::Graph::countPaths(vector<vector<int>>& grid) {
	int r = grid.size(), c = grid[0].size();
	if (r == 0 || c == 0) {
		return 0;
	}
	auto memo = vector<vector<int>>(r, vector<int>(c));
	int ans = 0;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			ans = (ans + Graph::dfs(i, j, memo, grid)) % Graph::mod;
		}
	}
	return ans;
}

int::Graph::dfs(int x, int y, vector<vector<int>>& memo, vector<vector<int>>& grid) {
	//visited
	if (memo[x][y] != 0) {
		return memo[x][y];
	}
	++memo[x][y];
	//four directions
	for (int i = 0; i < 4; ++i) {
		int nx = x + Graph::dirs[i][0], ny = y + Graph::dirs[i][1];
		if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && grid[nx][ny] > grid[x][y]) {
			//a valid direction
			memo[x][y] = (memo[x][y] + Graph::dfs(nx, ny, memo, grid)) % Graph::mod;  
		}
	}
	return memo[x][y];
}
