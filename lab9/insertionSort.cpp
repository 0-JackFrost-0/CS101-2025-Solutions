// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

// inserts num into arr
void insert(vector<int>& arr, int num){
    // stores the max element in the array
    int mx = num;
    // the current size of the array
    int n = arr.size();
    // iterate all the elements of the array
    for(int i = 0; i < n; i++){
        // store the max of mx and arr[i] temporarily
        int tmp = max(mx, arr[i]);
        // store the min num in arr[i]
        arr[i] = min(mx, arr[i]);
        // set mx as the max element
        mx = tmp;
    }
    // lastly, push the max element in the array
    arr.push_back(mx);
}

// function simply prints out all the elements in the array
void print(vector<int>& a){
    for(int x : a)
        cout << x << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int first;
    cin >> first;
    arr.push_back(first);
    
    for(int i = 1; i < n; i++){
        int num;
        cin >> num;
        // insert each number one by one
        insert(arr, num);
    }
    // print the array at the end
    print(arr);
}