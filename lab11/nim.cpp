// Author: Om Godage
// Date: 5/4/25

#include<simplecpp>

int main(){
    int n;
    cin >> n;
    int xorsum = 0;
    while(n--){
        int tmp;
        cin >> tmp;
        xorsum ^= tmp;
    }
    cout << (xorsum ? "First" : "Second" )<< endl;
}