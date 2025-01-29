// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

// simple program to check for century leap years
// and leap years
main_program{
    int y;
    cin >> y;

    if(y%400 == 0)
        cout << "Century Leap Year\n";
    else if(y%4==0 && y%100!=0)
        cout << "Leap Year\n";
    else
        cout << "Not a Leap Year\n";
    
}