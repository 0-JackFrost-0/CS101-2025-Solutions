// Author: Om Godage
// Date: 29/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    vector<vector<int>>mat(n, vector<int>(n));
    int ans = 0;
    // take the matrix as input and count the
    // number of non-zero elements for the 
    // projection in xy-plane
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j])
                ans++;
        }
    }
    
    // sum the max of each row 
    // to find the projection in 
    // the yz-plane
    for(int i = 0; i < n; i++){
        int maxInRow = -1;
        for(int j = 0; j < n; j++){
            maxInRow = max(maxInRow, mat[i][j]);
        }
        ans += maxInRow;
    }

    // sum the max of each col
    // to find the projection in
    // the xz-plance
    for(int j = 0; j < n; j++){
        int maxInCol = -1;
        for(int i = 0; i < n; i++){
            maxInCol = max(maxInCol, mat[i][j]);
        }
        ans += maxInCol;
    }

    // print the ans
    cout << ans << endl;
}