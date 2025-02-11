// Author: Om Godage
// Date: 8/2/25
#include <simplecpp>

// prints a line of of the triangles
void print_starry_line(int num_spaces, int num_stars) {
    for (int i=0; i<3; i++) {
        // print the spaces
        for (int j=0; j<num_spaces; j++) {
                cout<<" ";
        }
        // print the stars
        for (int j=0; j<num_stars; j++) {
            cout<<"*";
        }
        // if it is not the last line, print the spaces
        // else, the spaces can be omitted
        if (i!=2) {
            // extra space as per pattern
            cout<<" ";
            for (int j=0; j<num_spaces; j++) {
                cout<<" ";
            }
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int space = n-1;
    int star = 1;
    while(n--){
        print_starry_line(space, star);
        star+=2;
        space--;
    }
}


