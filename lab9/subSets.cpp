// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

void recurse(vector<int> nums, vector<vector<int>>& ans){
    // base case
    if(nums.empty()){
        // push empty set into answer
        ans.push_back(vector<int>());
        return;
    }

    // remove the last element and find the answer
    // for the rest recursively
    int num = nums.back();
    nums.pop_back();
    recurse(nums, ans);

    // includes num into all ans sets and appends these
    vector<vector<int>> includesNum;
    for(vector<int> set: ans){
        // add last num into set 
        set.push_back(num);
        // add this new set to includesNum
        includesNum.push_back(set);
    }
    // add all sets in includesNum to ans
    for(vector<int> set: includesNum)
        ans.push_back(set);
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    // power set stores all subsets
    vector<vector<int>> power_set;

    // fill up the power set recursively
    recurse(nums, power_set);
    
    for(vector<int> set: power_set){
        // same as checking set.size() == 0
        // this set isnt an actual set, its just a vector<int>
        // with the name as set
        if(set.empty())
            continue;
        for(int num: set)
            cout << num << " ";
        cout << endl;
    }

}