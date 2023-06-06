#include<stdio.h>
#include<stdbool.h>

#define MAX_NODES 100

void dfs(int graph[MAX_NODES][MAX_NODES], int numNodes, int startNode, bool visited[]) 
{
	int i;
	printf("%d ", startNode);
	visited[startNode] = true;
	
	for(i= 1; i<= numNodes; i++)
	{
		if(graph[startNode][i] == 1 && !visited[i])
		{
			dfs(graph, numNodes, i, visited);
		}
	}
}

int main()
{
	int graph[MAX_NODES][MAX_NODES] = {
	{0, 1, 1, 0, 0, 0},
	{0, 0, 1, 1, 0, 0},
	{0, 1, 1, 1, 0, 0},
	{0, 1, 0, 0, 1, 0},
	{0, 0, 1, 0, 0, 0},
	{0, 1, 1, 1, 1, 1},
	{0, 1, 1, 0, 0, 0}
	};
	
	int numNodes = 7;
	int startNode = 0;
	bool visited[MAX_NODES] = {false};
	
	printf("DFS traversal starting from node %d: ", startNode);
	dfs(graph, numNodes, startNode, visited);
	printf("\n");
	
	return 0;
}
