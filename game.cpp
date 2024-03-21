#include <iostream>
using namespace std;

void game1(string s){
    string guess;
    do{
        int strikes = 0;
        int balls = 0;
        cout << "Enter a guess: " << endl;
        cin >> guess;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(s[i] == guess[j]){
                    if(i == j) strikes++;
                    else if(i != j) balls++;
                }
            }
        }
        if(s != guess){
            cout << "Strikes: " << strikes << " Balls: " << balls << endl;
        }
        

    }while(s != guess);

    cout << "You Win!" << endl;
}

