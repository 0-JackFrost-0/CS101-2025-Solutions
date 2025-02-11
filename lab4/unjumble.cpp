// Author: Om Godage
// Date: 4/2/25

#include <simplecpp>

// Function to check if two strings are anagrams
bool isAnagram(int m, int n) {
    long long sum1 = 0, prod1 = 1, sum2 = 0, prod2 = 1;
    char ch;
    // Compute sum and product for first string
    for (int i = 0; i < m; i++) {
        cin >> ch;
        if(ch >= 'A' && ch <= 'Z')
            ch = ch -'A'+'a';
        sum1 += ch;
        prod1 *= ch;
    }
    
    // Compute sum and product for second string
    for (int j = 0; j < n; j++) {
        cin >> ch;
        if(ch>='A' && ch<='Z')
            ch = ch -'A'+'a';
        sum2 += ch;
        prod2 *= ch;
    }

    // if their lengths arent equal, return false
    if (m != n) return false;
    // if the sum and products are equal, return true, else return false
    return (sum1 == sum2 && prod1 == prod2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        // prints 1 if they are equal, and 0 otherwise
        cout << isAnagram(m, n) << endl;
    }
    return 0;
}
