// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

// custom input function for inputting the array
void input(vector<int>& A){
    for(int i = 0; i < A.size(); i++)
        cin >> A[i];
}

int main(){
    int n, m;
    cin >> n;
    // vector A
    vector<int> A(n);
    // fill in A
    input(A);
    cin >> m;
    // vector B
    vector<int> B(m);
    // fill in B
    input(B);
    
    // required to print if no new student found
    bool noNewStudent = true;

    // iterate over each roll number in B
    for(int i = 0; i < m; i++){
        // did you find B[i] in A?
        bool found = false;
        // iterate over each roll number in A
        for(int j = 0; j < n; j++){
            // if B[i] found in A, set found to true
            // and break
            if(A[j] == B[i]){
                found = true; 
                break;
            }
        }
        // if B[i] not found in A, new roll number
        // so print B[i], and set noNewStudent to false
        if(!found){
            noNewStudent = false;
            cout << B[i] << " ";
        }
    }
    // if no new student found, print no new student
    if(noNewStudent)
        cout << "no new student";
    cout << endl;
}