//  Author: Om Godage
// Date: 8/2/25
#include <simplecpp>

// Function to rotate the integer
int rotateMe(int n, char operation) {
    int numDigits = 0;
    // count the number of digits in the integer
    for(int i = n; i > 0; i /= 10) {
        numDigits++;
    }

    int power = pow(10, numDigits - 1);
    
    // Rotate the integer to the right
    if (operation == 'R') {
        int lastDigit = n % 10;
        n = (lastDigit * power) + (n / 10);
    // Rotate the integer to the left
    } else if (operation == 'L') {
        int firstDigit = n / power;
        n = (n % power) * 10 + firstDigit;
    }
    
    return n;
}

int main() {
    int n;
    char op;
    cin >> n;
    cin >> op;
    // Loop until the user enters 'X'
    while (op != 'X') {
        n = rotateMe(n, op);
        cin >> op;
    }
    // Print the final number
    cout << n << endl;
    return 0;
}