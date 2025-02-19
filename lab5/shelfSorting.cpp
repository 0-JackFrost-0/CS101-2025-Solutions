#include<simplecpp>

void swap(char &a, char &b){
    int tmp = a;
    a= b;
    b=tmp;
}

void sortBooks(char &a, char &b, char &c, char& d){
    // first pass
    if(a>b)
        swap(a, b);
    if(b>c)
        swap(b, c);
    if(c>d)
        swap(c, d);
    
    // second pass
    if(a>b)
        swap(a, b);
    if(b>c)
        swap(b, c);
    
    // third pass
    if(a>b)
        swap(a, b);
    return;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        char a, b, c, d;
        cin >> a >> b >> c >> d;
        sortBooks(a, b, c, d);
        cout << a << b  << c << d << endl;
    }
}