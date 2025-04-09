// Author: Om Godage
// Date: 29/3/25
#include "graph.h"

int main(){
    int n;
    cin >> n;
    int e;
    cin >> e;
    Graph g = Graph(n);
    while(e--){
        int a, b;
        cin >> a >> b;
        g.insert(a, b); // Add edge between two cities
    }

    int q;
    cin >> q;
    while(q--){
        vector<bool> visited(n, false);
        int a, b;
        cin >> a >> b;
        cout << g.isReachable(a, b, visited) << endl;
    }
}