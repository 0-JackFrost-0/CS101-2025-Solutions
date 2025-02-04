// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    // sum stores the sum of nums
    int n, sum = 0;
    cin >> n;

    // we create a copy of n, 
    // and iterate until the copy is non-zero
    // extracting the units digit and
    // adding it in sum
    for(int ncpy = n; ncpy > 0; ncpy /= 10){
        sum += ncpy%10;
    }

    // using the ternary operator
    // to print out the right message
    cout << ((n%sum == 0) ? "YES" : "NO") << endl;
}