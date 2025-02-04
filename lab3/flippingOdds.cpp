// Author: Om Godage
// Date: 27/1/25

#include<simplecpp>

main_program{
    // fixing the seed for the tosses
    int SEED = 74;
    srand(SEED);

    // making variables to store tails
    // the number of tails will just be
    // n - tails 
    int n, tails = 0;
    cin >> n;

    // iterating n times and doing tosses
    for(int i = 0; i < n; i++){
        int toss = rand()%2;
        if(toss)
            tails++;
    }

    // printing out result
    cout << "H: " << n-tails << ", T: " << tails << endl; 
}