// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // initialise the min and max values 
    int mx = -1, mn = 1e6+1;
    while(n>0){
        // extracting the last digit of n
        int cur = n%10;
        // updating the max value
        if(mx < cur)
            mx = cur;
        // updating the min value
        if(mn > cur)
            mn = cur;
        // removing the last digit of n
        n/=10;
    }
    // printing out the difference
    cout << mx-mn << endl;
}