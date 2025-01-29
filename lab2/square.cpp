// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // printing the first line of stars
    repeat(n){
        cout << "* ";
    }
    cout << endl;

    // printing the middle lines (n-2 lines)
    int i = 0;
    repeat(n-2){
        int j = 0;
        // printing the first star
        cout << "* ";
        // now, we need to alternate
        // both in the x and the y dimension,
        // so we use the parity of (x+y) 
        // to figure out which symbol to print
        // since they've told, the top left symbol (coordinates (0, 0)) should be -
        // it's easy to see that all coordinates with even sum will have a -, 
        // and all coordinates with odd sum will have a +
        repeat(n-2){
            if((i+j)%2==0)
                cout << "- ";
            else
                cout << "+ ";
            j+=1;
        }
        // printing the last star
        cout << "* " << endl;
        i+=1;
    }
    
    // printing the last line of stars
    repeat(n){
        cout << "* ";
    }
    cout << endl;
}