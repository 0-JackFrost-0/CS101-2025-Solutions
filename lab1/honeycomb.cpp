// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    turtleSim();
    
    // creates the dotted polygon at the center
    repeat(6){
        repeat(5){
            penDown();
            forward(5);
            penUp();
            forward(5);
        }
        right(60);
    }
    // creates the polygons on the sides
    penDown();
    repeat(6){
        left(120);
        repeat(5){
            forward(50);
            right(60);
        }
        left(120);
    }
    getClick();
}

