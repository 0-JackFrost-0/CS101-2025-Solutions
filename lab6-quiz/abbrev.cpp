// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

// takes as argument the character array, 
// and its size
bool isValidAbbreviation(char c[], int n){
    // chr reads characters one by one
    char chr;
    // newWord is set to true when a new word
    // is read by the progam, otherwise its false
    bool newWord = true;
    // ctr is to index into the array
    // we increment ctr whenenver a match is found
    // and the ctr shouldn't exceed the size of the array
    int ctr = 0;
    cin >> chr;
    if(chr >= 'a')
        chr += 'A'-'a';
    cin >> noskipws;

    while(chr != '\n'){
        // if the current character is the start of a 
        // new word
        if(newWord){
            // if ctr is greater than or equal to n
            // this means that the full form has more than
            // four words, but the abbreviation only has 4 letters
            // so this isnt the valid abbreviation
            
            // if c[ctr]!=chr, this means that the letter doenst match 
            // the abbreviation, so it's an invalid abbreviation
            if((ctr >= n || c[ctr] != chr))
                return false;
            // if the character matches the abbreviation
            // set newWord to false, and increment ctr,
            // to make it ready to compare the next letter
            // of the abbreviation
            else if(c[ctr] == chr){
                newWord = false;
                ctr++;
            }
        }
        // read in the next letter
        cin >> chr;
        // if the character was a space, 
        // this marks the start of a new word
        // so set newWord to true, and input the
        // first letter of this newWord
        if(chr == ' '){
            newWord = true;
            cin >> chr;
        }
        // if the char is lowercase, convert it to uppercase
        if(chr >= 'a')
            chr = chr -'a'+'A';
    }
    // if ctr!= n, this means that all the letters in the
    // abbreviation haven't been matched
    return (ctr == n);
}
int main(){
    // create a boolean array to store 
    // abbreviation
    char c[4];
    // take the abbreviation as input from the user
    for(int i = 0; i < 4; i++){
        cin >> c[i];
        if(c[i] >= 'a')
            c[i] += 'A'-'a';
    }
    
    cout << (isValidAbbreviation(c, 4) ? "yes" : "no") << endl;
}