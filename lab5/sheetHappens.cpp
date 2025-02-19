#include<simplecpp>

void excellentColumn(int n){
    if(n==0){
        return;
    }

    excellentColumn((n-1)/26);
    cout << char('A'+(n-1)%26);
}

int main(){
    int n;
    cin >> n;
    excellentColumn(n);
    cout <<endl;
}