#pragma once
#include <queue>
#include <vector>
class bfs
{
public:
	bfs();
	~bfs();
private:
	class Node {
		unsigned x;
		unsigned y;
	};
	std::queue<Node> frontier;
	std::vector<Node> visited;
};

