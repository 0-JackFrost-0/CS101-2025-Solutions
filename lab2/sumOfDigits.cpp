// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    int sum = 0;
    cin >> n;
    // if n is negative, we make it positive again
    if(n < 0)
        n*=-1;
    // in each loop, we add the last digit in 
    // n to sum, and remove the last digit, looping through all digits
    while(n>0){
        sum += (n%10);
        n /= 10;
    }
    cout << sum << endl;
}


