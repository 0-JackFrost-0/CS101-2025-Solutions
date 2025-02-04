// Author: Om Godage
// Date: 27/1/25

#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    double n;
    cin >> n;
    // epsilon determines the degree of accuracy 
    // of the square root, smaller the epsilon, more accurate the answer
    // try setting epsilon to zero and see what happens
    double epsilon = 1e-6;
    // we binary search for the square root of n
    double low = 0, high = n;
    while(high-low >= epsilon){
        double mid = low + (high - low)/2;
        // if square of mid is greater than n, we set high to mid
        if(mid*mid >= n)
            high = mid;
        // otherwise, we set low to mid
        else
            low = mid;
    }
    cout << std::fixed << std::setprecision(6) << (low + high) / 2 << endl;
}