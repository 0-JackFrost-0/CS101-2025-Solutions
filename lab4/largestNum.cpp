// Author: Om Godage
// Date: 8/2/25
#include <iostream>
using namespace std;

// Function that takes the number of integers, processes each to find its largest digit,
// and builds the final number x (as an integer) by appending these digits.
int giveLargest(int n) {
    int x = 0; // This will store the final number
    
    // loops over the n test cases
    // make sure you understand this condition
    // n is post decremented by one, 
    // and when n is zero, this will be evaluated
    // as false, and the while loop will stop
    // this is a neat way of looping exactly n times 
    // instead of writing a for loop, which takes a few more 
    // characters to write, programmers are lazy lol :P
    while(n--){
        int num;
        cin >> num;  // Read the integer

        // Find the largest digit in the current integer
        int maxDigit = 0;
        while (num > 0) {
            int curDigit = num % 10;
            if (curDigit > maxDigit) {
                maxDigit = curDigit;
            }
            num /= 10;
        }

        // Append the largest digit to the final number x
        x = x * 10 + maxDigit;
    }
    return x;
}

int main() {
    int n;
    cin >> n;  // Read the number of integers
    cout << giveLargest(n);
}
