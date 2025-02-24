// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    // booleans to check whether 
    // the string contains
    // uppercase and lowercase letters
    bool containsUpper = false;
    bool containsLower = false;

    int n;
    cin >> n;
    char c;
    // input each character one by one
    for(int i = 0; i < n; i++){
        cin >> c;
        // if the character was a digit
        // simply continue
        if(c >= '0' && c <= '9')
            continue;
        // if a lowercase letter is found
        // set containsLower to true
        else if(c>='a')
            containsLower = true;
        // if a uppercase letter is found
        // set containsUpper to true
        else 
            containsUpper = true;
    }
    // print out the right string
    cout << ((containsLower^containsUpper) ? "YES" : "NO") << endl;
}