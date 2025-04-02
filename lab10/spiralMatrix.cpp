// Author: Om Godage
// Date: 29/3/25
#include<simplecpp>

// helper function to print out the matrix
void print(vector<vector<int>> matrix){
    for(vector<int> row: matrix){
        for(int elem : row)
            cout << elem << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    // how much to step in each direction
    int dx = 1, dy = 0;
    // matrix
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int cnt = 0, x = 0, y = 0;
    // loop runs n*n times, filling up all
    // the entries in the matrix
    while(cnt < n*n){
        // fill up the current cell with a new number
        matrix[y][x] = ++cnt;
        // check if the next cell is within bounds
        // and is empty
        // if it's not, then you have to rotate!
        if(x+dx >= n || x+dx < 0 || y+dy >= n || y+dy < 0 || matrix[y+dy][x+dx] > 0){
            int tmp = dx;
            dx = -dy;
            dy = tmp;
        }
        x+=dx;
        y+=dy;
    }
    print(matrix);
}