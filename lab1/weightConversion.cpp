// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>
// Included to set precision to 2 decimal places
#include<iomanip>

main_program{
    float weight;
    cin >> weight;
    // fixed fixes the configuration of the output stream
    // setprecision fixes the number of decimal places
    cout << fixed << setprecision(2) << weight*2.20 << endl;
}