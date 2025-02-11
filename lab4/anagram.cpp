// Author: Om Godage
// Date: 8/2/25
#include <simplecpp>

bool isAnagram(int a, int b) {

    int count0 = 0, count1 = 0, count2 = 0;
    int count3 = 0, count4 = 0, count5 = 0;
    int count6 = 0, count7 = 0, count8 = 0;
    int count9 = 0;

    while(a > 0){
        int cur = a % 10;
        switch(cur){
            case 0:
                count0++;
                break;
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
            case 7:
                count7++;
                break;
            case 8:
                count8++;
                break;
            case 9:
                count9++;
                break;
        }
        a /= 10;
    }

    while(b > 0){
        int cur = b % 10;
        switch(cur){
            case 0:
                count0--;
                break;
            case 1:
                count1--;
                break;
            case 2:
                count2--;
                break;
            case 3:
                count3--;
                break;
            case 4:
                count4--;
                break;
            case 5:
                count5--;
                break;
            case 6:
                count6--;
                break;
            case 7:
                count7--;
                break;
            case 8:
                count8--;
                break;
            case 9:
                count9--;
                break;
        }
    }

    return count0 == 0 && count1 == 0 && count2 == 0 && count3 == 0 && count4 == 0 && count5 == 0 && count6 == 0 && count7 == 0 && count8 == 0 && count9 == 0;
}

int main() {
    int a, b;
    cin >> a >> b; 

    cout << (isAnagram(a, b) ? "yes" : "no") << endl;

    return 0;
}