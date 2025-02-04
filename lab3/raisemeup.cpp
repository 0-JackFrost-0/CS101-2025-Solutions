// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    // res stores the result
    // a is the base
    // p is the exponent
    unsigned int a, p, res = 1;
    cin >> a >> p;

    // the rest of the code is simply following
    // the algorithm given
    while(p > 0){
        if(p%2 == 1)
            res *= a;
        p /= 2;
        a *= a;
    }

    cout << res << endl;
}