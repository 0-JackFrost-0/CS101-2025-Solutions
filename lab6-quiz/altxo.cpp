// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    // iterate over all n lines
    for(int i = 0; i < n; i++){
        // print out the gaps corresponding to line i
        // line i contains exactly i gaps, and n-i symbols
        // and the symbols alternate bw O and X, starting from O
        for(int j = 0; j < i; j++)
            cout << " ";
        
        // to print n-i symbols
        for(int j = 0; j < n-i; j++){
            // j&1 is the same as writing j%2 == 1
            // just shorter
            // for all odd j's, X is printed
            if(j&1)
                cout << "X";
            // for all even j's, O is printed
            else
                cout << "O";
        }
        cout << endl;
    }
}
