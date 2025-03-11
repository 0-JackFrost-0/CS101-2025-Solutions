// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    int l;
    vector<bool> A(n, 0);

    // take input until end of input
    while(cin>>l){
        A[l-1] = 1;
    }
    // iterate over each element in A
    for(int i = 0; i < n; i++){
        // if number missing, print it
        if(A[i] == 0){
            cout << i+1 << " ";
        }
    }

    cout << endl;
}
