// Author: OM Godage
// Date: 12/3/25
#include<simplecpp>

// function rotates the matrix 90 degrees clockwise and returns it
vector<vector<int>> rotateMatrix(vector<vector<int>>& a){
    int n = a.size(), m = a[0].size();
    // create A^R
    vector<vector<int>> rot(m, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            // fill A^R according to the formula
            rot[j][n-1-i] = a[i][j];
        }
    }
    
    return rot;
}

// function prints the matrix
void print(vector<vector<int>> mat){
    for(auto row: mat){
        for(auto num: row)
            cout << num << " ";
        cout << endl;
    }
}

int main(){
    int r, c;
    cin >> r >> c;
    // take nums as input
    vector<vector<int>> nums(r, vector<int>(c, 0));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> nums[i][j];
    // print the rotated matrix
    print(rotateMatrix(nums));
}