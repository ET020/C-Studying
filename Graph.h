#include <iostream>
/* 
struct Node {
	int val = 0;
	std::list<Node *> neighbors;
};
*/
class Graph {
public:
	const int mod = 1e9 + 7;
	const int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
	int countPaths(vector<vector<int>>& grid);
	int dfs(int x, int y, vector<vector<int>>& memo, vector<vector<int>>& grid);
};
