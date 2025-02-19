// Author: Om Godage
// Date: 14/2/25

#include<simplecpp>


void calculator(int &a, int b, char op){
    // switch over the right operator and modify the result
    switch(op){
        case '+':
            a+=b;
            return;
        case '*':
            a*=b;
            return;
        case '-':
            a-=b;
            return;
        case '/':
            a/=b;
            return;
        default:
            cout << "wrong argument" << endl;
            return;
    }
}

int main(){
    int num, num2;
    cin >> num;
    char op;
    while(true){
        cin >> op;
        if(op=='X')
            break;
        cin >> num2;
        // modify num by reference
        calculator(num, num2, op);
    }
    cout << num;
}