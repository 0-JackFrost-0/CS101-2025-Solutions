// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // i is the number of stars in the current line
    // tot is the total number of characters to be printed on each line
    int i = 1, tot = 2*n-1;
    repeat(n){
        // printing the prefix of _'s
        repeat((tot-i)/2){
            cout << "_";
        }
        // printing out the *'s
        repeat(i){
            cout << "*";
        }
        // printing the suffix of _'s
        repeat((tot-i)/2){
            cout << "_";
        }
        // incrementing the number of stars to be printed on the next line
        i = i + 2;
        cout << endl;
    }
}