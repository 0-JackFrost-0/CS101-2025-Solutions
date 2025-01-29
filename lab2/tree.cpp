// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    int n;
    cin >> n;
    // gap is the number of spaces on a side of the triangle
    // symbols is the number of symbols printed on a line
    // so, a line in the triangle looks as follows

    // gap number of spaces, followed by symbols number of alternating *'s and +'s
    // followed by gap number of spaces again
    // symbols increment by 2 in every loop, and the gap decrements by 1
    // we keep on going until gap becomes zero
    int gap = n-1, symbols = 1;
    while(gap>0){
        // printing gap spaces
        repeat(gap)
            cout << " ";
          
        // alternating between * and + using the parity of i
        // even i's correspond to *, whereas odd i's correspond to +
        // this ensures pattern starts from * on each line, and the pattern alternates
        int i = 0;
        repeat(symbols){
            if(i%2 == 0)
                cout<<"*";
            else 
                cout<<"+";
            i+=1;
        }

        // printing gap spaces
        repeat(gap)
            cout << " ";
        cout << endl;
    
        symbols+=2;
        gap -= 1;
    }

    // printing out the trunk of the tree
    repeat(n/2){
        repeat(n-2)
            cout << " ";
        repeat(3)
            cout << "*";
        repeat(n-2)
            cout << " ";
        cout << endl;
    }
}