// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

double sumMarks(int n){
    if(n == 0)
        return 0.0;
    double num;
    cin >> num;
    return num + sumMarks(n-1);
}

int main(){
    int n;
    double totalMarks;
    cin >> n >> totalMarks;
    if(totalMarks == sumMarks(n))
        cout << "Total is Correct!\n";
    else
        cout << "Time to Crib!\n";
        
}