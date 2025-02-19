#include<simplecpp>

void swap(int &a, int &b){
    int tmp = a;
    a= b;
    b=tmp;
}

void sortCards(int &a, int &b, int &c, int& d){
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sortCards(a, b, c, d);
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}