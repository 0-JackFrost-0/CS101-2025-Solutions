// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    // b stores all the inputs
    // isCompatible stores whether the 2 coders are
    // compatible or not
    bool b[6], isCompatible;
    // take all of them as input from the user
    for(int i = 0; i < 6; i++)
        cin >> b[i];
    
    // compute the expression required
    isCompatible = (b[0]&&b[3])&&(b[1]||b[4])&&(b[2]||b[5]);
    cout << (isCompatible ? "compatible" : "not compatible") << endl;
}