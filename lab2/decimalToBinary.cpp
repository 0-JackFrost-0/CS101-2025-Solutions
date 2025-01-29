// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    int p = 0;
    // pow(a, b), calculates a^b
    while(pow(2, p) <= n){
        p+=1;
    }
    // n= 1000 ==> 1111101000
    // p = 10 --> pow(2, p) = 100000000
    // following the given algorithm step-by-step
    p-=1;
    while(p+1>0){
        double power = pow(2, p);
        if(power <= n){
            cout << 1;
            n-=power;
        }
        else
            cout << 0;
        p-=1;
    }
    cout << endl;
}