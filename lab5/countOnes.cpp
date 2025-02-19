// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    // iterate over each bit of the number n
    while(n>0){
        // extract the last bit of the number, and
        // add it in sum
        ans += (n&1);
        // get rid of the last bit of the number
        n >>= 1;
    }
    cout << ans << endl;
}
