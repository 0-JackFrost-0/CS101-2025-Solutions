// Author: Om Godage
// Date: 12/3/25
#include<simplecpp>

int robHouse(int i, vector<int>& nums){
    // base case
    if(i == 0)
        return nums[i];
    else if(i == 1)
        return max(nums[i], nums[i-1]);

    else
    // either choose the rob the current house, and then find how much money you will get by leaving out the (i-1)th house,
    // or you leave the ith house, and find how much money you'll get from the other i-1 houses
        return max(nums[i]+robHouse(i-2, nums), robHouse(i-1, nums));
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout << robHouse(n-1, nums) << endl;
}