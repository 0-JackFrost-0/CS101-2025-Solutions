// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    for(int i = -n/2; i <= n/2;i++){
        int absi = abs(i);
        // prints out the initial spaces
        // before the x pattern is printed
        // there will be a total of 2*absi
        // spaces on each line
        for(int j = 0; j < absi; j++)
            cout << "  ";
        for(int j = 0; j < n/2-absi; j++)
            cout << "x ";
        cout << "| ";
        for(int j = 0; j < n/2-absi; j++)
            cout << "o ";
        cout << endl;
    }

}