// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

// my method of solving
int main(){
    int n;
    cin >> n;
    // prev stores the previous char, 
    // and c stores the current char
    char c, prev;
    // the first char is read out of the loop
    // because prev isnt defined here
    cin >> c;
    // c-'A' gives u the index, of the letter
    // so, if c was 'D', c-'A' will be three, 
    // and then doing 'Z'-3 will give you 'W'
    // which is the right map for 'D'
    // i typecast it to char to avoid prining a number
    cout << char('Z'-(c-'A'));
    // set previous char to c
    prev = c;
    // loop runs n-1 times, as the first 
    // char is already done with
    for(int i = 1; i < n; i++){
        // take new char from input
        cin >> c;
        // if its a new character, decode it
        if(c!=prev)
            cout << char('Z'-(c-'A'));
        // set previous char
        prev = c;
    }
    cout << endl;
}