// Author: Om Godage
// Date: 14/2/25
#include<simplecpp>

int getArea(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4){
    int xu = x1, yu=y1, xl = x2, yl = y2;
    // finding the coordinates of the intersecting rectangle
    if(x1 < x3)
        xu = x3;
    if(y1 > y3)
        yu = y3;
    if(x2 > x4)
        xl = x4;
    if(y2 < y4)
        yl = y4;

    // checking for no overlap condition
    if(xl-xu < 0 || yu-yl < 0)
        return 0;
    else
        return (xl-xu)*(yu-yl);
}

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cout << getArea(x1, y1, x2, y2, x3, y3, x4, y4) << endl;
}