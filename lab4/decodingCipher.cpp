// Author: Om Godage
// Date: 4/2/25
#include<simplecpp>

// this function handles type one encoding
void handleTypeOne(){
    int num;
    // input the number
    cin >> num;
    // over here you subtract 1 from num first
    // this is because, we want A = 0, B = 1, and so on
    // but the encoding is A = 1, B = 2
    // after subtracting 1, we add 'A', which simply adds the 
    // ASCII value of 'A' (65) to num
    // lastly, we convert it to a char, to get the corresponding 
    // character

    cout << char(num - 1 +'A');
}

// this function handles type two encoding
void handleTypeTwo(){
    int num;
    char chr;
    // you take as input the character and the number
    cin >> chr >> num;

    // note that shifting 26 times gives the same character
    // hence, you only need to deal with num%26 shifts
    // as all the other num - (num%26) shifts will 
    // give back the same character
    num = num%26;

    // firstly, we subtract
    // chr from 'A', which will 
    // map A to 0, B to 1 C to 2 and so on
    // next, to shift letters back by num
    // we simply subtract this number by num
    // for example, lets say the character was 'Z', and num was 2
    // 'Z'-'A'= 25, and 25 - 2 = 23, which when added back to 'A'
    // and outputted will give you X, as expected
    num = (chr-'A' - num);
    // this is the case where you have 'A' and 1, for which the answer should be Z
    // but the num for this would be -1
    // and if you do num+'A', it would print some other character
    // you need to loop around after A, i.e. A shifted by 2 should give Y, and so on
    // to take care of this, -1 should map to 25 (which will be the number for Z)
    // -2 mapped to 24 (for Y), and so on
    // so we check if num < 0, we simply add 26, to loop around for negative numbers
    // and since the num is less than 26, this would result in a positive number
    if(num < 0)
        num+=26;
    cout << char('A'+num);
}

// this function handles type three encoding
void handleTypeThree(){
    char chr;
    int num;
    // you take as input the character and the number
    cin >> chr >> num;
    // loop over num times, 
    // and output chr
    while(num--)
        cout << chr;
}

int main(){
    int n;
    cin >> n;
    // loops over the n test cases
    // make sure you understand this condition
    // n is post decremented by one, 
    // and when n is zero, this will be evaluated
    // as false, and the while loop will stop
    // this is a neat way of looping exactly n times 
    // instead of writing a for loop, which takes a few more 
    // characters to write, programmers are lazy lol :P
    while(n--){
        // you take the type of encoding as input
        int type;
        cin >> type;
        // based on the type of encoding, you call the right function
        switch(type){
            case 1:
                handleTypeOne();
                break;
            case 2:
                handleTypeTwo();
                break;
            case 3:
                handleTypeThree();
                break;
            // this is the case when a wrong type is inputted
            default:
                cout << "Wrong type inputted" << endl;
                break;
        }
    }
}