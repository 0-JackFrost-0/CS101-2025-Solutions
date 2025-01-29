// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

// This code utilises the Euclids GCD theorem
// i.e. gcd(a, b) = gcd(b, a%b)
// have a look at this video for a better explanation
// https://youtu.be/O3WlqAH_naA?si=BiXlhUr-ODpiRfwS

main_program{
    int n, m;
    cin >> n >> m;
    while(m!=0){
        int tmp = m;
        m = n%m;
        n = tmp;
    }
    cout << n << endl;
}