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
    // surface area as seen from the z-axis
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j])
                ans++;
        }
    }
    // multiply the answer by 2, 
    // to consider the front and back both
    ans <<= 1;

    // iterate over each row, and add
    // the absolute value of the 
    // differences of consecutive elements
    for(int i = 0; i < n; i++){
        int prev = 0;
        for(int j = 0; j < n; j++){
            ans += abs(prev-mat[i][j]);
            prev = mat[i][j];
        }
        // add the last elements height explicitly
        // to correctly calculate the surface area
        ans += mat[i][n-1];
    }


    // the same as previous, 
    // only now you iterate over each column
    // instead of each row
    for(int j = 0; j < n; j++){
        int prev = 0;
        for(int i = 0; i < n; i++){
            ans += abs(prev-mat[i][j]);
            prev = mat[i][j];
        }
        // add the height of the last row explicitly
        // to calculate the area correctly
        ans += mat[n-1][j];
    }
    
    // print the answer
    cout << ans << endl;
}