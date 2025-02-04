// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    unsigned int n;
    cin >> n;
    // find the square of n
    unsigned int n_square = n*n;
    // boolean variable denoting if kaprekar number is found
    bool found = false;
    // d is used to extract a and b
    // the condition n_square/d > 0
    // makes sure a > 0, 
    // and we check for b > 0 inside
    for(unsigned int d = 10; n_square/d > 0; d*=10){
        unsigned int a = n_square/d, b = n_square%d;
        if(a+b == n && b > 0){
            // we've found a kaprekar split,
            // so we can break out
            found = true;
            break;
        }
    }
    // found will be 1 if true, else 0
    cout << found  << endl;
}