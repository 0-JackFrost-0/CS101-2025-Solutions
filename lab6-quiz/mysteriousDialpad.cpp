// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    int i1, i2;
    char c;
    cin >> i1 >> i2;
    // input each character of word1
    for(int i = 0; i < i1; i++){
        cin >> c;
        // if its the first or last letter,
        // just print it
        if(i == 0 || i == i1-1){
            // if there's only one letter,
            // the first and last letters are
            // one and the same, so print it twice
            if(i1 == 1)
                cout << c << c;
            else
                cout << c;
        }
    }
    // input each character of word2
    for(int i = 0; i < i2; i++){
        cin >> c;
        // if its the first or last letter,
        // just print it
        if(i == 0 || i == i2-1){
             // if there's only one letter,
            // the first and last letters are
            // one and the same, so print it twice
            if(i2 == 1)
                cout << c << c;
            else
                cout << c;
        }
    }
    cout << endl;
}