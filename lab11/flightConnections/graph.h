// Author: Om Godage
// Date: 29/3/25
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
using namespace std;

struct Graph{
    int numNodes;

    // This denotes whether there exists an edge between two cities
    vector<vector<bool>> adjacencyMatrix;

    Graph(int num){
        numNodes = num;

        // Initializing to false assuming that no edge exists
        adjacencyMatrix = vector<vector<bool>>(num, vector<bool>(num, false));
    }

    // The three function should be implemented by students
    void insert(int a, int b);
    bool isReachable(int a, int b, vector<bool>&visited);
};

#endif // GRAPH_H
