// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>
// included to put an assert statement
#include<assert.h>

main_program{
    int score;
    cin >> score;
    // this statement makes sures that score lies in the bounds required
    // try inputting a value outside the required range, u'll see
    // an error pop up
    assert(score<=100 && score>=0);
    
    char grade;
    // try understanding what this function does
    grade = 'A'+(100-score)/10-(score%10==0);

    // lower bounding the grade
    grade = max(grade, 'A');
    
    // upper bounding the grade
    grade = min(grade, 'F');
    
    cout << grade << endl;
}