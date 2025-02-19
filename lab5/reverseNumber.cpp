// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

void reverse(int n, int &rev){
    if(n == 0)
        return; // Base case
    rev*=10;
    rev+=n%10;
    reverse(n/10,rev); // Recursive call
}

int main(){
    int n;
    int rev = 0;
    cin >> n;
    reverse(n,rev);
    cout << rev << endl;
}