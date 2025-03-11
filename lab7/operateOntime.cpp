// Author: Om Godage
// Date: 7/3/25
#include<simplecpp>

struct TIME{
    int h, m;

    void print(){
        cout << h << " hrs " << m << " mins" << endl;
    }
};

TIME addTime(TIME& t1, TIME& t2){
    TIME t;
    t.h = t1.h + t2.h;
    t.m = t1.m + t2.m;
    if(t.m >= 60){
        t.h++;
        t.m -= 60;
    }
    return t;
}

TIME subTime(TIME t1, TIME t2){
    TIME t;
    if(t1.h < t2.h){
        TIME temp = t1;
        t1 = t2;
        t2 = temp;
    }
    t.h = t1.h - t2.h;
    t.m = t1.m - t2.m;
    if(t.m < 0){
        t.h--;
        t.m += 60;
    }
    return t;
}

int main(){
    int h,m;
    cin >> h >> m;
    TIME t1 = {h,m};
    cin >> h >> m;
    TIME t2 = {h,m};

    addTime(t1, t2).print();
    subTime(t1, t2).print();
}