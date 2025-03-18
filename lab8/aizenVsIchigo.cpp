// Author: Om Godage
// Date: 12/3/25
#include<simplecpp>

int getScore(vector<int>& nums, int l, int r, bool isP1){
    // base case
    if(l==r)
        // if there's only one element
        // and it's P1's turn, then u return that element
        // otherwise, P2 will select it, and so P1's score
        // stays the same, so return 0
        return (isP1 ? nums[l] : 0);

    // if it's P1's turn
    if(isP1)
        // here, P1 has two choices, either to select nums[l], or to select nums[r], 
        // P1 selects the one which gives him the max score at the end, hence we use recursion to find out selecting which one of them would provide a bigger score for P1
        return max(nums[l]+getScore(nums, l+1, r, !isP1), nums[r]+getScore(nums, l, r-1, !isP1));
    
    // if it's P2's turn
    else
        // if it's P2's turn, P2 will try to minimize P2's score, hence return the min score on selecting either of the numbers
        return min(getScore(nums, l+1, r, !isP1), getScore(nums, l, r-1, !isP1));
}

// function calculates upper and lower vectors recursively, as explained in the video
void calcUpperLower(vector<vector<int>>& nums, vector<int>&lower, vector<int>& upper, int start){
    int n = nums.size();
    // base case, simply return, without further modifying upper or lower
    if(start == n/2)
        return;
    // these store the sum of the upper and lower part respectively
    int sumUpper = 0, sumLower = 0;
    // you start from start and go upto n-1-start
    for(int i = start; i <= n-1-start; i++){
        sumUpper += nums[start][i];
        sumLower += nums[i][start];
    }
    
    for(int i = start; i <= n-1-start; i++){
        sumUpper += nums[i][n-1-start];
        sumLower += nums[n-1-start][i];
    }
    // you see that the corners are double counted
    // so the corners are subtracted once, to get the right sum
    sumUpper -= nums[start][n-1-start];
    sumLower -= nums[n-1-start][start];

    // you simply add these sums to lower and upper
    lower.push_back(sumLower);
    upper.push_back(sumUpper);

    // recursively calculate upper and lower for the inner parts of num
    calcUpperLower(nums, lower, upper, start+1);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> nums(n, vector<int>(n, 0));

    // input the nums matrix, and set all the diagonal elements to zero
    // to avoid them from messing up the sum calculation
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> nums[i][j];

        nums[i][i] = 0;
    }
        
    vector<int> lower, upper;
    // this function will populate the lower and upper sums
    calcUpperLower(nums, lower, upper, 0);

    vector<int> full;
    // populate the full vector
    for(int x: lower)
        full.push_back(x);
        
    // since upper was in reversed order, 
    // you iterate it in the reverse order and then
    // put elements in full
    while(upper.size()){
        full.push_back(upper.back());
        upper.pop_back();
    }

    cout << getScore(full, 0, full.size()-1, 1) << endl;
}