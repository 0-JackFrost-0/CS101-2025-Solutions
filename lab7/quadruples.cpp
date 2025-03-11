// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    // input the array A
    for(int i = 0; i < n; i++)
        cin >> A[i];

    // select 4 ordered indices, and check 
    // if they are a valid quadruple
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                for(int l = k+1; l < n; l++){
                    if(A[i]*A[i]+A[j]*A[j] == A[k]*A[k]+A[l]*A[l])
                        cout << "("<< A[i] << "," << A[j] << "," << A[k] << "," << A[l] << ")" << endl;
                }
            }
        }
    }

}