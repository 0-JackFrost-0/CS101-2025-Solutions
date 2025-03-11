// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int x;
    cin >> x;
    // B stores the positions of x in A
    vector<int> B;
    // iterate over each element in A
    for(int i = 0; i < n; i++){
        // if A[i] is equal to x, add i to B
        if(A[i] == x)
            B.push_back(i);
    }

    // if B is empty, print -1
    if(B.size() == 0)
        cout << -1 << endl;
    else{
        // print the positions of x in A
        for(int i = 0; i < B.size(); i++)
            cout << B[i] << " ";
        cout << endl;
    }
}