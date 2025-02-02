// Author: 0-JackFrost-0
// Date: 29/1/25

// Liars bar is a video game: watch the start of this video to get the idea of the game
// https://youtu.be/5MsGX4fI-og?si=Wpnk9OksxUvUYAu5

// You are gonna make a toy version of liar's bar in this question
// there will be 2 players, a bluffer, which is controlled by the cpu
// and the guesser, which will be the user
// the bluffer will choose to play truthfully or lie each round, whereas 

#include <simplecpp>
#include <random>

int init(){
    // printing out starting stuff
    cout << "\n=================================" << endl;
    cout << "     🌟 WELCOME TO LIAR'S BAR 🌟   " << endl;
    cout << "=================================\n" << endl;

    cout << "💬 Hello Guesser! Enter a number (1 to 6): ";
    int num;
    // take guesserNum as input from the user, and
    // if guesserNum is not in the bounds, keep on looping
    do {
        cin >> num;
        if (num < 1 || num > 6) {
            cout << "❌ Invalid choice! Try again: ";
        }
    } while (num < 1 || num > 6);
    return num;
}

int setRound(){
    int round = rand() % 3 + 1;
    cout << "---------------------------------" << endl;

    switch (round) {
        case 1:
            cout << "👑 *KING'S ROUND!* 👑\n" << endl;
            break;
        case 2:
            cout << "👸 *QUEEN'S ROUND!* 👸\n" << endl;
            break;
        case 3:
            cout << "🃏 *ACE'S ROUND!* 🃏\n" << endl;
            break;
    }
    return round;
}

// there are 6 moves you can select from
// 0 represents playing 1 card with a lie
// 1 represents playing 1 card truthfully
// 2 represents playing 2 cards with a lie
// 3 represents playing 2 cards truthfully
// 4 represents playing 3 cards with a lie
// 5 represents playing 3 card truthfully
int getBlufferMove(int trueCards){
    int option;
    switch (trueCards) {
        case 0:
            // all unmatching cards, so select from 1lie, 2lies or 3lies
            // make option pick a random number between 0, 2, 4
            option = rand() % 3 * 2;
            break;
        case 1:
            // select one from one lie, one true, two lies and three lies
            // make option pick a random number between 0, 1, 2, 5
            option = rand() % 4;
            if(option == 3)
                option = 5;
           
            break;
        case 2:
            // select one from one lie, one true, two true, two lies and three lies
            // make option pick a random number between 0, 1, 2, 3, 5
            option = rand() % 5;
            if(option == 4)
                option = 5;
            break;
        case 3:
            // all matching cards, so select from 1true, 2true or 3true
            // make option pick a random number between 1, 3, 5
            option = rand() % 3 * 2 + 1;
            break;
    }
    return option;
}

main_program {
    // sets the seed for the program
    srand(time(0));
    // we store numbers to help us in pulling the trigger
    int guesserNum, bluffNum;
    // booleans to store whether the guesser or the bluffer is dead
    bool guesserLost = false, blufferLost = false;
    // N just keeps track of the number of rounds
    int N = 0;
    
    guesserNum = init();

    // pick a random number from 1 to 6
    bluffNum = rand() % 6 + 1;

    cout << "\n🔥 The game begins! 🔥\n" << endl;

    while (!guesserLost && !blufferLost) {
        cout << "Round number: " << N+1 << endl;
        // pick a random number from one to three here
        int round = setRound();        
        // trueCards is the count of cards
        // which is matching with the current round
        // i.e. if its the King's round
        // and the cards bluffer got are 1, 2, 1
        // then trueCards will be set to 2, as there are
        // 2 kings and one queen present
        int trueCards = 0;
        bool blufferLying = false;

        // pick a card at random, there are 3 types of cards
        // check if the card number matches with the round
        // if it does, increment trueCards by 1
        for (int i = 0; i < 3; i++) {
            int card = rand() % 3 + 1;
            if (card == round) {
                trueCards++;
            }
        }

        int opt = getBlufferMove(trueCards);
        blufferLying = (opt % 2 == 0);
        // print out the bluffer's move
        // option/3+1 will give us the number of cards played
        cout << "🎭 Bluffer plays " << (opt/2)+1 << (round == 1 ? " King's" : (round == 2 ? " Queen's" : " Ace's")) << endl;

        cout << "\n🧐 Guesser, do you think the bluffer is lying? (Y/N): ";
        char guess;
        cin >> guess;

        // flush over here is just to print out the statement, 
        // and not keep it stored in the buffer
        cout << "🔎 Revealing the truth... " << flush;
        // sleep is just to wait for one second, to create suspense hehe
        sleep(1); 
        cout << "💥" << endl;

        if ((guess == 'Y' && blufferLying) || (guess == 'N' && !blufferLying)) {
            // this is the case where the guesser is right
            // when the guesser is right, we choose a random number
            // from 1 to 6, and if this matches with the bluffer's number
            // the bluffer is dead, and the game ends
            // if the bluffer is not dead, the game continues
            cout << "✅ CORRECT! The Bluffer was " << (blufferLying ? "LYING" : "TELLING THE TRUTH") << "!\n" << endl;
            cout << "🔫 The Bluffer rolls the die..." << endl;
            int bullet = rand() % 6 + 1;
            
            if (bullet == bluffNum) {
                cout << "💀 *BLUFFER LOSES!* 💀" << endl;
                blufferLost = true;
            } else {
                cout << "😅 Bluffer survives this round..." << endl;
            }
        } else {
            // this is the case where the guesser is wrong
            // when the guesser is wrong, a number from 1 to 6 is picked
            // at random, and if this matches with the guesser's number
            // the guesser is dead, and the game ends
            // if the guesser is not dead, the game continues
            cout << "❌ WRONG! The Bluffer was " << (blufferLying ? "LYING" : "TELLING THE TRUTH") << "!\n" << endl;
            cout << "🔫 The Guesser rolls the die..." << endl;
            int bullet = rand() % 6 + 1;

            if (bullet == guesserNum) {
                cout << "💀 *GUESSER LOSES!* 💀" << endl;
                guesserLost = true;
            } else {
                cout << "😅 Guesser survives this round..." << endl;
            }
        }
        N++;
        cout << "---------------------------------\n" << endl;
    }

    cout << "🎬 *GAME OVER!* 🎬" << endl;
}
