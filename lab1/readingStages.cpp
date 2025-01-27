// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    int age;
    cin >> age;
    
    // Check the age and print the correct reading stage accordingly
    // Notice that, when there is a single line of code inside an if statement
    // You dont need braces { . }
    // This can be used to reduce clutter in your code at times
    // But can also lead to errors in code, so better to use braces :)
    
    if(age>=8)
        cout << "Advanced reader";
    else if(age>=6)
        cout << "Intermediate reader";
    else if(age>=4)
        cout << "Beginning reader";
    else if(age>=2)
        cout << "Pre-reader";
    else
        cout << "Invalid";
    cout << endl;
}