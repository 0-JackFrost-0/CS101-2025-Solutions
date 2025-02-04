// Author: Om Godage
// Date: 27/1/25
#include<simplecpp>

main_program{
    int n;
    cin >> n;

    // we keep the assumption that n is prime
    // and as soon as we find a number that divides
    // n, we set is_prime to false, and break
    bool is_prime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            is_prime = false;
            break;
        }
    }
    // note that over here we only need to check numbers
    // upto the square root of n, this is because, if n has a
    // divisor a, which is bigger than sqrt(n), 
    // then, n%a == 0, hence n/a = b, which is an integer
    // and b will be smaller than sqrt(n), so there will be 
    // atleast one integer which divides n lesser than or equal to 
    // square root of n, otherwise its prime
    
    cout << (is_prime ? "sus" : "not sus") << endl;
}