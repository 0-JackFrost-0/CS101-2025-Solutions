// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;

    // iterates over each line one by one
    for(int i = 0; i < 2*n; i++){
        if(i&1)
            // n+1 = i/2 + n - i/2 + 1;
            // i/2 is the initial spaces for the
            // even patterns, then n-i/2
            // is the number of dashes in the pattern
            // and 1 is added to account for the space of |
            for(int j = 0; j < n+1; j++)
                cout << " ";
        else
            // i/2 spaces before the even patterns are printed
            for(int j = 0; j < i/2; j++)
                cout << " ";
        
        // printing out the common pattern
        cout << "|";
        for(int j = 0; j < n-i/2; j++)
            cout << "-";
        cout << "|";
        cout << endl;
    }

}