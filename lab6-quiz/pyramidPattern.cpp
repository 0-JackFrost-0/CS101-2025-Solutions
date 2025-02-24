// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    // iterate over each of the n lines
    // of the pattern
    for(int i = 0; i < n; i++){
        // for a pattern of n lines
        // the first line will have
        // (n-1) double spaces, the second line
        // will have (n-2) double spaces
        // and so on
        // so, for line i, where the numbering
        // starts from 0, i'll have n-i-1 double spaces
        for(int j = 0; j < n-i-1; j++)
            cout << "  ";
        // just print this i+1 times (since i start from 0)
        for(int j = 0; j <= i; j++)
            cout << "/__\\";
        // newline at the end
        cout << endl;
    }
}

//      /__\
//    /__\/__\
//  /__\/__\/__\
