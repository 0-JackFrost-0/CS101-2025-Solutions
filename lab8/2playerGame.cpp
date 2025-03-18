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

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout << getScore(nums, 0, n-1, 1) << endl;
}