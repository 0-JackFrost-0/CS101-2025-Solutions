// Author: Om Godage
// Date: 19/1/25

#include<simplecpp>

main_program{
    // input the year and day
    int y, d;
    cin >> y >> d;

    // handling the case for jan
    if(d<=31){
        // if d is a single digit number, have to prepend a zero
        if(d<10)
            cout << "0" << d << "/01/" << y << endl;
        else
            cout << d << "/01/" << y << endl;
    }
    else{
        // removing the days of jan
        d-=31;
        int month = 2;
        // bool to store if we found a month from feb to july
        bool isMonthFound = false;
        // loop over months from feb to july
        repeat(6){
            // if month is feb
            if(month == 2){
                if(d<=28){
                    isMonthFound = true;
                    break;
                }
                d-=28;
            }
            // months from march to july
            else if(d<=(30+(month%2 == 1))){
                isMonthFound = true;
                break;
            }
            else
                d -= (30+(month%2 == 1));
            
            month+=1;
        }

        // if no month matched from feb to july,
        // need to check months from aug to dec
        if(!isMonthFound){
            repeat(5){
                if(d<=(30+(month%2 == 0))){
                    isMonthFound = true;
                    break;
                }
                else
                    d -= (30+(month%2==0));

                month+=1;
            }
        }

        // printing out the result
        // prepending zero wherever necessary
        if(d<10){
            if(month < 10)
                cout << "0" << d << "/0" << month << "/" << y << endl;
            else
                cout << "0" << d << month << "/" << y << endl;

        }
        else{
            if(month < 10)
                cout << d << "/0" << month << "/" << y << endl;
            else
                cout << d << "/" << month << "/" << y << endl;
        }
    }
}