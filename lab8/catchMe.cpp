// Author: Om Godage
// Date: 12/3/25
#include <simplecpp>

int robHouse(int start, int i, vector<int>& nums){
    // base case
    if(i == start)
        return nums[i];
    else if(i == start+1)
        return max(nums[i], nums[i-1]);

    else
    // either choose the rob the current house, and then find how much money you will get by leaving out the (i-1)th house,
    // or you leave the ith house, and find how much money you'll get from the other i-1 houses
        return max(nums[i]+robHouse(start, i-2, nums), robHouse(start, i-1, nums));
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (n == 1) 
        cout << nums[0] << endl; // Only one house to rob
    else{
        // 0 and n-1 cant be taken together, so solve
        // both cases independently and then give the answer
        int case1 = robHouse(0, n-2, nums);
        int case2 = robHouse(1, n-1, nums);

        cout << max(case1, case2) << endl; 
    }
}

