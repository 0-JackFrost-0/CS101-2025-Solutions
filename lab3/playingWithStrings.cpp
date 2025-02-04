// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    // making variables to store
    // input letter, and weights of both strings
    int n, m, weight1 = 0, weight2 = 0;
    char cur_letter;
    cin >> n >> m;

    // this boolean is used to store
    // whether the current letter is capital or not
    // it needs to be reset in every iteration of the loop
    bool is_cap = false;

    // looping over all characters for string1
    for(int i = 0; i < n; i++){
        // input a letter
        cin >> cur_letter;

        // if the letter is uppercase,
        // set is_cap to true, and make it lowercase
        if(cur_letter-'A' >= 0 && cur_letter-'A' <= 25){
            is_cap = true;
            cur_letter = cur_letter - 'A' + 'a';
        }
        // if a letter is a special character, add
        // cur_letter%10 to weight and continue
        else if(cur_letter-'a' < 0 || cur_letter-'a' > 25){
            weight1 += cur_letter%10;
            continue;
        }
        
        // if the letter is a vowel
        if(cur_letter == 'a' || cur_letter == 'e' ||
           cur_letter == 'i' || cur_letter == 'o' || cur_letter == 'u'){

            // check if it was uppercase or lowercase
            if(is_cap)
                weight1 += 2;
            else
                weight1 += 5;
        }
        // if the letter is a consonant
        else{
            // check if it was uppercase or lowercase
            if(is_cap)
                weight1 += (cur_letter-'a'+1) - 1;
            else
                weight1 += (cur_letter-'a'+1) + 2;
        }
        // resetting is_cap for next input letter
        is_cap = false;
    }

    // looping over all characters for string2
    for(int i = 0; i < m; i++){
        // input a letter
        cin >> cur_letter;

        // if the letter is uppercase,
        // set is_cap to true, and make it lowercase
        if(cur_letter-'A' >= 0 && cur_letter-'A' <= 25){
            is_cap = true;
            cur_letter = cur_letter - 'A' + 'a';
        }
        // if a letter is a special character, add
        // cur_letter%10 to weight and continue
        else if(cur_letter-'a' < 0 || cur_letter-'a' > 25){
            weight2 += cur_letter%10;
            continue;
        }
        
        // if the letter is a vowel
        if(cur_letter == 'a' || cur_letter == 'e' ||
           cur_letter == 'i' || cur_letter == 'o' || cur_letter == 'u'){

            // check if it was uppercase or lowercase
            if(is_cap)
                weight2 += 2;
            else
                weight2 += 5;
        }
        // if the letter is a consonant
        else{
            // check if it was uppercase or lowercase
            if(is_cap)
                weight2 += (cur_letter-'a'+1) - 1;
            else
                weight2 += (cur_letter-'a'+1) + 2;
        }
        // resetting is_cap for next input letter
        is_cap = false;
    }

    // we put the bigger number in weight2,
    // so if weight1 is bigger, we swap them here
    if(weight2 < weight1){
        int tmp = weight2;
        weight2 = weight1;
        weight1 = tmp;
    }

    // printing out the output
    cout << (weight2-weight1) << " ";
    cout << ((weight2-weight1) < 10 ? "Close" : 
             ((weight2-weight1) > 50 ? "Far" : 
             "Moderate")) << endl;
}