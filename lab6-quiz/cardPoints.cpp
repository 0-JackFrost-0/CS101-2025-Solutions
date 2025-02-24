// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int findScore(int k){
    // 2 three consecutive and
    // 2 four consecutive 
    if(k == 8)
        return 10;
    // 2 three consecutive and
    // 1 four consecutive
    else if(k >= 6)
        return 8;
    // 1 three consecutive and
    // 1 four consecutive
    else if(k >= 4)
        return 5;
     // 1 three consecutive
    else if(k>=3)
        return 3;
    else
        return 0;
}

int main(){
    int C = 0, D=0, H=0, S=0, score = 0;
    char cur;
    // input 8 characters
    for(int i = 0; i < 8; i++){
        cin >> cur;
        // count the number of occurences for each
        // character
        switch(cur){
            case 'C':
                C++;
                break;
            case 'D':
                D++;
                break;
            case 'H':
                H++;
                break;
            default:
                S++;
                break;
        }
    }
    // add scores for each consecutive
    // suit individually
    score += findScore(C);
    score += findScore(D);
    score += findScore(H);
    score += findScore(S);
    cout << score << endl;
}