// Author: 0-JackFrost-0
// Date: 24/2/25
#include<simplecpp>

int main(){
    char degree, courseType;
    bool isValid;
    int year;
    cin >> degree >> year >> courseType;

    if(degree == 'b'){
        // isValid computation for btech
        isValid = (year == 1 && courseType == 'i') || 
                 (year == 2 && courseType == 'c') ||
                 (year == 3 && courseType != 't') ||
                 (year == 4 && courseType == 'e');
    }
    else{
        // isValid computation for Mtech
        isValid = (year == 1 && (courseType == 'e' || courseType == 'i')) ||
                  ((year == 2 || year == 3) && (courseType == 'e' || courseType == 't'));
    }
    // print out correctly
    cout << (isValid? "valid" : "invalid") << endl;
}