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
    vector<vector<int>> mat(n, vector<int>(n));
    // x moves to the right in the first row
    int dx = 1;
    int x = 0, y = 0;
    int i  = 1;
    // loop runs n*n times, filling up all
    // the entries in the matrix
    while(i <= n*n){
        // fill up the current cell with a new number
        mat[y][x] = i;
        // only need to check boundary conditions for x,
        // y can be calculated accordingly
        if(x+dx >= n || x+dx < 0){
            dx = -dx;
            y++;
        }
        else
            x += dx;
        i++;
    }
    print(mat);
}