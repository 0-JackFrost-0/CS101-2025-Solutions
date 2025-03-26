// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

bool isValid(int a[][9]){
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            // an element can be present atmost once
            if(a[i][j] > 1)
                return false;

    return true;
}

int main(){
    // maintain counts of each number in each 
    // row, column and grid
    int rows[9][9], cols[9][9], subgrid[9][9];
    // initialize all elements to false in 2D array
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            rows[i][j] = 0;
            cols[i][j] = 0;
            subgrid[i][j] = 0;
        }
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            // input each element of the sudoku
            char cell;
            cin >> cell;
            // if the element is empty
            if(cell == '.')
                continue;
            int element = cell - '0';
            // element is present in row i and column j, so
            // increment its count

            // element-1 to map 1-9 to 0-8
            rows[i][element-1]++;
            cols[j][element-1]++;
            subgrid[3*(i/3) + j/3][element-1]++;

        }
    }
    cout << (isValid(rows) && isValid(cols) && isValid(subgrid) ? "True\n" : "False\n");
}