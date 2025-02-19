// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

void tree(int depth, int x){
    if(depth == 0)
        return;
    forward(x);
    left(30);
    tree(depth-1, x/2);
    right(30);
    forward(20);
    right(30);
    tree(depth-1, x/2);
    left(30);
    forward(-x-20);
    return;
}

int main(){
    turtleSim();
    int depth;
    cin >> depth;
    left(90);
    tree(depth, 50);
    getClick();
}