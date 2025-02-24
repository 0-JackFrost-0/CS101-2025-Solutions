// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    char c;
    bool containsUpper = false, containsLower = false, containsDig = false;
    bool containsSpecial = false, isValid;
    // read in each character
    for(int i = 0; i < 8; i++){
        cin >> c;
        // check if char is upper, lower, digit, or special,
        // and set contains to true
        if(c >= 'a' && c <= 'z')
            containsLower = true;
        else if(c >= 'A' && c <= 'Z')
            containsUpper = true;
        else if(c>= '0' && c <= '9')
            containsDig = true;
        else 
            containsSpecial = true;
    }
    
    // finally, check the valid condition, and print the right output
    isValid = containsUpper && containsLower && containsDig && !containsSpecial;
    cout << (isValid ? "khul jaa sim sim" : "tai tai fish") << endl;
}