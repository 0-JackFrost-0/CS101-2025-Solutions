// Author: Om Godage
// Date: 8/2/25
#include <simplecpp>

// Better way of solving
bool isValidTile(unsigned int n) {
    // A number is a power of 2 if n > 0 and (n & (n - 1)) == 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

// Normal way of solving
// bool isValidTile(unsigned int n){
//     int countOnes = 0;
//     while(n>0){
//         if(n&1){
//             countOnes++;
//         }
//         n>>=1;
//     }
//     return countOnes == 1;
// }

int main() {
    int t;
    cin >> t;

    // loops over the t test cases
    // make sure you understand this condition
    // n is post decremented by one, 
    // and when n is zero, this will be evaluated
    // as false, and the while loop will stop
    // this is a neat way of looping exactly n times 
    // instead of writing a for loop, which takes a few more 
    // characters to write, programmers are lazy lol :P
    while (t--) {
        unsigned int n;
        cin >> n;
        cout << (isValidTile(n) ? "yes" : "no") << endl;
    }

    return 0;
}
