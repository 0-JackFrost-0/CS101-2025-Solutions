// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

// function recursively gets the RegEx for str
string recurse(string& str, int l, int r, vector<vector<int>>& pairs){
    // stores the answer string
    string ans = "";
    int numPairs = pairs[0].size();
    // iterate from l to r (inclusive)
    for(int i = l; i <= r; i++){
        // if we see an open bracket, solve the part inside the 
        // parentheses recursively, and repeat it the right times
        // before appending to the answer
        if(str[i] == '('){
            int idx = -1;
            // find the index of the closing bracket from the pairs vector
            for(int j = 0; j < numPairs; j++){
                // check if this opening bracket is the one
                // i'm at
                if(pairs[0][j] == i){
                    idx = j;
                    break;
                }
            }
            // get the recursive solution
            string str2 = recurse(str, i+1, pairs[1][idx]-1, pairs);
            i = pairs[1][idx]+2;
            int reps = str[i]-'0';
            string joiner = "";
            // repeat the substring 
            for(int i = 0; i < reps; i++)
                joiner += str2;
            // concatenate the string to the answer
            ans += joiner;
        }
        // if the character read is ^, we need to 
        // repeat the previous character
        else if(str[i] == '^'){
            char prev = str[i-1];
            // since we already added the previous char
            // once, we subtract one from here
            int reps = (str[i+1]-'0')-1;
            string joiner = "";
            // repeat the character
            while(reps--)
                joiner += prev;
            i++;
            // concat it to the answer
            ans += joiner;
        }
        else
        // if str[i] is simply a character
        // just append it to answer
            ans += str[i];
    }

    return ans;
}


int main(){
    string str;
    cin >> str;
    int n = str.length();
    // pairs stores the pair of open 
    // and closed parenthesis
    vector<vector<int>> pairs(2);
    // openIdx is used to store the open 
    // brackets before they are added into
    // pairs
    vector<int> openIdx;
    // filling up the pairs vector
    for(int i = 0; i < n; i++){
        if(str[i] == '(')
            openIdx.push_back(i);
        else if(str[i] == ')'){
            pairs[0].push_back(openIdx.back());
            pairs[1].push_back(i);
            // since the last index is matched,
            // you pop it from the openIdx array
            openIdx.pop_back();
        }
    }

    // recursively printing out the answer
    cout << recurse(str, 0, n-1, pairs) << endl;
}