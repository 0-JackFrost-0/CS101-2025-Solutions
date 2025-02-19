// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

main_program{
    int n;
    cin >> n;
    for(int i = -n/2; i<=n/2; i++){
        int absi = (i<0 ? i*-1: i);
        // prints the outer spaces of the diamond
        for(int j = 0; j < absi; j++)
            cout << " ";
        // prints the star on the first and the last line
        if(absi == n/2)
            cout << "*\n";
        else{
            cout << "*";
            // prints out the inner spaces of the diamond
            for(int j = 0; j < 2*(n/2-absi)-1; j++)
                cout << " ";
            cout << "*\n";
        }
    }
}