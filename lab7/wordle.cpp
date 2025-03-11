// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    vector<string> candidates(n);
    string partialWord;
    // taking the array as input
    for(int i = 0; i < n; i++)
        cin >> candidates[i];
    
    cin >> partialWord;
    bool isMatching;
    // iterating over each candidate
    for(int i = 0; i < n; i++){
        isMatching = true;
        if(partialWord.length() != candidates[i].length()){
            isMatching = false;
            continue;
        }
        // iterating over all letters one by one
        for(int j = 0; j < partialWord.length(); j++){
            if(partialWord[j] == '_')
                continue;
            if(partialWord[j] != candidates[i][j]){
                isMatching = false;
                break;
            }
        }
        // if match found, print the candidate, and break out
        if(isMatching){
            cout << candidates[i] << endl;
            break;
        }
    }
    // if no match found, print not possible
    if(!isMatching)
        cout << "Not Possible\n";
}