// Author: Om Godage
// Date: 12/3/25
#include<simplecpp>

int getMoney(vector<int>& coins, int sum, int i){
    if(sum == 0)
        return 1;
    if(sum < 0 || i < 0)
        return 0;
    return getMoney(coins, sum-coins[i], i)+getMoney(coins, sum, i-1);
}

int main(){
    int n, num;
    cin >> n >> num;
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];
    cout << getMoney(coins, num, n-1) << endl;
}
