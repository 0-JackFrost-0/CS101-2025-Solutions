#include<simplecpp>

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int max_value = -1;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        max_value = max(max_value, nums[i]);
    }

    vector<int> counts(max_value+1);
    for(int i = 0; i < n; i++)
        counts[nums[i]]++;
    
    for(int i = 0; i < max_value+1; i++){
        while(counts[i]--)
            cout << i << " ";
    }
    cout << endl;
}