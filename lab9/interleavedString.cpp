// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

// recursivly solve the question
bool recurse(string &s1, string &s2, string &s3, int i, int j, int k){
    // if all the strings are finished, then 
    // simply return true
    if(i == s1.size() && j == s2.size() && k == s3.size())
        return true;

    bool a = i < s1.size(), b = j < s2.size(), c = k < s3.size();
    // if the characters from both the strings match
    // then simply try out both options, i.e.
    // the furst call tries picking the char from s1
    // and the second call tries picking from s2
    if(a && b && c && s1[i] == s3[k] && s2[j] == s3[k])
        return recurse(s1, s2, s3, i+1, j, k+1) || recurse(s1, s2, s3, i, j+1, k+1);
    // if only the first string matches, only one option
    else if(a && c && s1[i] == s3[k])
        return recurse(s1, s2, s3, i+1, j, k+1);
    // if only the second string matches, only one option
    else if(b && c && s2[j] == s3[k])
        return recurse(s1, s2, s3, i, j+1, k+1);
    // if neither matches, then return false
    else 
        return false;
}

int main(){
    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;
    cout << recurse(s1, s2, s3, 0, 0, 0) << endl;
}
