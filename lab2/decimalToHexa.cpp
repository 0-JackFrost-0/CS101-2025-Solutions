// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    int p = 0;
    // pow(a, b), calculates a^b
    while(pow(16, p) <= n){
        p+=1;
    }
    // following the algorithm given step-by-step
    p-=1;
    while(p+1>0){
        int power = pow(16, p);
        if(power <= n){
            int quotient = n/power;
            n %= power;
            // need to write this if condition 
            // to print letters for quotient between 10 to 15
            if(quotient>=10){
                char tmp = quotient%10+'A';
                cout << tmp;
            }
            // if the digit is from 0 to 9, you can simply print it out
            else 
                cout << quotient;
        }
        else
            cout << 0;
        p-=1;
    }
    cout << endl;
}