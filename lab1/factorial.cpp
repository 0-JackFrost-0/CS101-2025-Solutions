// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // fac represents the factorial of number n, and
    // i is the number to be muliplied in each loop
    int fac = 1, i = 1;
    repeat(n){
        fac = fac * i;
        i = i + 1;
    }
    cout << fac << endl;
}

// for larger values of n, for example n = 20
// you might see negative values being printed
// this is because, the max value that an int
// can store is 2^31-1
// To circumvent this, we can change the type of
// fac to be a larger data type,
// maybe an unsigned int (2^32-1), long long int (2^63-1) or 
// unsigned long long int (2^64-1)