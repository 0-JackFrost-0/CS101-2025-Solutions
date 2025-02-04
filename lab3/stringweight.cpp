// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    // n, m are the lengths of both strings
    // weight1, weight2 are the weights of both strings
    // mul stores the running product of the numbers
    int n, m, weight1 = 0, weight2 = 0, mul = 0;
    bool isPrevCons = false;
    cin >> n >> m;
    
    // cur letter is used to input letters
    char cur_letter;
    // we run a for loop n times
    // input a character, check if its a vowel
    // and add the right weight

    for(int i = 0; i < n; i++){
        // input the letter
        cin >> cur_letter;
        // checking if the alghabet is a vowel
        if(cur_letter == 'a' || cur_letter == 'e'||
           cur_letter == 'i' || cur_letter == 'o'||
           cur_letter == 'u'){
            // if the previous letter was a consonant, 
            // we need to start a new substring of vowels, 
            // so add the multiplication of the substring of consonants
            // to weight, and start mul with 3, also setting isPrevCons to false
            if(isPrevCons){
                weight1+=mul;
                mul = 3;
                isPrevCons=false;
            }
            else
                // if mul is zero, i.e. at the start, we set it to 3, otherwise
                // we just multiply a 3
                mul = mul==0 ? 3 : mul*3;
        }
        // if the current letter is a consonant
        else{
            // if the previous letter was a consonant
            if(isPrevCons)
                // if mul is zero, i.e. at the start, we set it to 2, else
                // we just multiply a 2
                mul = mul == 0 ? 2 : mul*2;
            // if the previous letter was a vowel, 
            // we need to start a new substring of consonants, 
            // so add the multiplication of the substring of vowels
            // to weight, and start mul with 2, also setting isPrevCons to true
            else{
                weight1+=mul;
                mul = 2;
                isPrevCons = true;
            }
        }
    }
    // we need to add up the mutiplication of the last substring in weight too
    weight1+=mul;
    
    // resetting these for the second string
    mul = 0;
    isPrevCons = false;
    // the same is done as above, but
    // for the second string
    for(int i = 0; i < m; i++){
        cin >> cur_letter;
        if(cur_letter == 'a' || cur_letter == 'e'||
           cur_letter == 'i' || cur_letter == 'o'||
           cur_letter == 'u'){

             if(isPrevCons){
                weight2+=mul;
                mul = 3;
                isPrevCons=false;
            }
            else
                mul = mul == 0 ? 3 : mul*3;
        }
        else{
            if(isPrevCons)
                mul = mul == 0 ? 2 : mul*2;
            else{
                weight2+=mul;
                mul = 2;
                isPrevCons = true;
            }
        }
    }
    weight2+=mul;

    // // the strengths are compared using the tertiary operator
    cout << weight1 << " " << weight2 << " ";
    cout << ((weight1 == weight2) ? 0 :
            (weight1 > weight2 ? 1 : 2)) << endl;
}
