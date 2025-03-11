// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

// seen before, only written in a recursive 
// form now
// Euclid's algorithm to find the gcd
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

// struct to represent a rational number
struct Rational{
    int num;
    int den;

    // divide both num and den by their gcd
    // to get the simplest form
    void simplestForm(){
        int g = gcd(num, den);
        num /= g;
        den /= g;
    }
    // print the rational number
    void print(){
        cout << num << " " << den << endl;
    }
};

Rational addRat(Rational& x, Rational& y){ 
    Rational z;
    z.num = x.num * y.den + y.num * x.den;
    z.den = x.den * y.den;
    z.simplestForm();
    return z;
}

Rational subRat(Rational& x, Rational &y){ 
    Rational z;
    z.num = x.num * y.den - y.num * x.den;
    z.den = x.den * y.den;
    z.simplestForm();
    return z;
}

Rational mulRat(Rational& x, Rational &y){ 
    Rational z;
    z.num = x.num * y.num;
    z.den = x.den * y.den;
    z.simplestForm();
    return z;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Rational p1 = {a, b};
    Rational p2 = {c, d};

    addRat(p1, p2).print();
    subRat(p1, p2).print(); 
    mulRat(p1, p2).print();
}