// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    turtleSim();
    int n;
    cin >> n;
    // Imagine an n-sided polygon, and on each of its n sides, create equilateral triangles
    // now remove the edges of the n-sided polygon, and ta-da, you have a star!
    repeat(n){
        // since the triangle is equilateral, internal angle is 60
        right(60);
        forward(50);
        // the external angle will be 120, this turn is taken at the outer vertex
        left(120);
        forward(50);
        // this turn brings the turtle in the orientation at the start of the loop
        right(60);
        // finally, we move on to the next side of the imaginary polygon
        // the exterior angle of an n-sided polygon is 360/n, hence this turn
        left(360.0/n);
    }
    getClick();
}