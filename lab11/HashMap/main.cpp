// Author: Om Godage
// Date: 28/3/25
#include "HashMap.h"

int main()
{
    HashMap mp = HashMap();
    int n;
    cin >> n;
    while (n--)
    {
        string city;
        int numAirports;
        cin >> city >> numAirports;
        mp.insert(city, numAirports);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string city;
        cin >> city;
        mp.remove(city);
    }

    mp.printTable();
}