// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

// custom input function for inputting the array
void input(vector<string>& A){
    for(int i = 0; i < A.size(); i++)
        cin >> A[i];
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> cs101(n), ma110(m);
    // take both vectors as input from the user
    input(cs101);
    input(ma110);

    // iterate over each roll number in cs101
    for(int i = 0; i < n; i++){
        bool found = false;
        // check whether it appears in ma110
        for(int j = 0; j < m; j++){
            if(ma110[j] == cs101[i]){
                found = true;
                break;
            }
        }
        // if it doesn't, print it out
        if(!found)
            cout << cs101[i] << endl;
    }

    // iterate over each roll number in ma110
    for(int i = 0; i < m; i++){
        bool found = false;
        // check whether it appears in cs101
        for(int j = 0; j < n; j++){
            if(cs101[j] == ma110[i]){
                found = true;
                break;
            }
        }
        // if it doesnt, print it out
        if(!found)
            cout << ma110[i] << endl;
    }

}