// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

bool calculateNetIncome(int x, int &y) {
    int mask = 1 << (x - 1);
    if ((y & mask) == 0)
        return false; 
    y ^= mask; 
    return true;
}

int main(){
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (calculateNetIncome(x, y))
            cout << "Taxed" << endl;
        else {
            cout << "Not Taxed" << endl;	
            cout << y << endl;
        }
    }
    return 0;
}

