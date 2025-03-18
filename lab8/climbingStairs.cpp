// Author: Om Godage
// Date: 12/3/25
#include<simplecpp>

long long climbingStairs(int n){
    // Base cases
    if(n == 1)  
        return 1;
    else if(n == 2)
        return 2;
    else if(n == 3)
        return 4;
    
    // recursive step
    return climbingStairs(n-1)+climbingStairs(n-2)+climbingStairs(n-3);
}

int main(){
    int n;
    cin >> n;
    cout << climbingStairs(n) << endl;
}