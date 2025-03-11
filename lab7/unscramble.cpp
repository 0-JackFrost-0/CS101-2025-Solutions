// Author: OM Godage
// Date: 7/3/25
#include<simplecpp>

int main(){
    int n;
    cin >> n;
    // vector of possible words
    vector<string> possWords(n);
    // vectors to store sums and prods
    // initialized correctly
    vector<long long> sums(n, 0), prods(n, 1);
    // input each possible word
    for(int i = 0; i < n; i++){
        cin >> possWords[i];
        // iterate over each char in possWords[i], and
        // compute the sum and prod for this word
        for(int j = 0; j < possWords[i].length(); j++){
            sums[i]+=possWords[i][j];
            prods[i]*=possWords[i][j];
        }
    }

    string jumbledWord;
    // to print null if no match is found
    bool found = false;

    cin >> jumbledWord;

    // sum and prod of jumbled word
    long long sumJ = 0, prodJ = 1;

    // calculate sumJ and prodJ
    for(int i = 0; i < jumbledWord.length(); i++){
        sumJ += jumbledWord[i];
        prodJ *= jumbledWord[i];
    }
    // iterate over each possWord, and check if
    // sums and prods match up
    for(int i = 0; i < n; i++){
        if(sums[i] == sumJ && prods[i] == prodJ){
            cout << possWords[i] << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "null\n";
}