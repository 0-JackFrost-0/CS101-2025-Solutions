// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>
// Included to set precision to 2 decimal places
#include<iomanip>

main_program{
    float temp;
    cin >> temp;
    // fixed fixes the configuration of the output stream
    // setprecision fixes the number of decimal places
    cout << fixed << setprecision(2) << (9.0/5)*temp+32 << endl;
}