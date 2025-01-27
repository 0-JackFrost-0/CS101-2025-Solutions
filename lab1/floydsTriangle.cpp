// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // m represents the number of numbers to print on the current line
    int m = 1;
    // looping over each line
    repeat(n){
        // l represents the number to print
        int l = 1;
        // looping over each number
        repeat(m){
            cout << l << " ";
            l = l + 1;
        }
        cout << endl;
        m = m + 1;
    }
}