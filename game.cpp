#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string randnum();

void game1(){
    srand((unsigned int)time(NULL));
    string answer = randnum();
    string guess;
    cout << "Answer is " << answer << endl;

    do{
        int strikes = 0;
        int balls = 0;
        cout << "Enter a guess: " << endl; 
        cin >> guess;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(answer[i] == guess[j]){
                    if(i == j) strikes++;
                    else if(i != j) balls++;
                }
            }
        }
        if(answer != guess){
            cout << "Strikes: " << strikes << " Balls: " << balls << endl;
        }
    }while(answer != guess);
    
    cout << "You Win!!" << endl;
}