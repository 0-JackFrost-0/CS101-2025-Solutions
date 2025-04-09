// Author: Om Godage
// Date: 5/4/25
#include "graph.h"

void Graph::insert(int a, int b){
    adjacencyMatrix[a-1][b-1] = true;
    adjacencyMatrix[b-1][a-1] = true;
}

bool Graph::isReachable(int a, int b, vector<bool>& visited){
    visited[a-1]=true;
    // base case
    if(a == b)
        return true;
    for(int i = 0; i < numNodes; i++){
        if(adjacencyMatrix[a-1][i] && !visited[i] && isReachable(i+1, b, visited))
            return true;
    }

    return false;
}