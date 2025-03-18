// Author: Om Godage
// Date: 12/3/25
#include<simplecpp>

// custom print function to print 2D vectors
void print(vector<vector<int>>& mat){
    
    for(vector<int> row: mat){
        for(int x: row)
            cout << x << " ";
        cout << endl;
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    // create a matrix with m rows and n columns, which has the dimensions of the transpose of the original matrix
    vector<vector<int>> mat(m, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[j][i];
        }
    }
    print(mat);
}