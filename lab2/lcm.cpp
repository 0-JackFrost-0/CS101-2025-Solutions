// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

// lcm(a,b) = a*b/gcd(a, b)
// we calculate gcd using the euclids's algorithm
// gcd(a, b) = gcd(b, a%b)

main_program{
    int n,m;
    cin >> n >> m;
    int prod = n*m;

    // Euclid's algorithm to find GCD
    while(m!=0){
        int tmp = m;
        m = n%m;
        n = tmp;
    }
    // Learn from https://youtu.be/O3WlqAH_naA?si=BiXlhUr-ODpiRfwS
    cout << prod/n << endl;
}
