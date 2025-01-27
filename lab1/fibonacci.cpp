// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // f0 represents the first term and f1 represents the second term
    int f0 = 0, f1 = 1;
    // in each loop, we print the first term, and set 
    // f1 := f0 + f1 and
    // f0 := f1
    // we need the tmp variable to keep the value of f1 temporarily
    // as we update the value of f1
    repeat(n){
        cout << f0 << " ";
        int tmp = f1;
        f1 = f0 + f1;
        f0 = tmp;
    }
    cout << endl;
}