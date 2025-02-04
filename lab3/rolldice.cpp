// Author: Om Godage
// Date: 27/1/25

#include <simplecpp>
#include <random>

main_program{
    // fixing the seed to 74
    int SEED = 74;
    srand(SEED);

    int N;
    cin >> N;

    // making variables to keep count of die rolls
    int count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0;
    int count_5 = 0, count_6 = 0;
    for(int i = 0; i < N; i++){
        // since rand() % 6 gives numbers between 0 to 5
        // we add 1 to give numbers from 1 to 6
        int roll = rand()%6 + 1;
        switch(roll){
            case 1:
                count_1++;
                break;
            case 2:
                count_2++;
                break;
            case 3:
                count_3++;
                break;
            case 4:
                count_4++;
                break;
            case 5:
                count_5++;
                break;
            default:
                count_6++;
                break;
        }
    }

    cout << "1: " << count_1 << endl;
    cout << "2: " << count_2 << endl;
    cout << "3: " << count_3 << endl;
    cout << "4: " << count_4 << endl;
    cout << "5: " << count_5 << endl;
    cout << "6: " << count_6 << endl;
}
