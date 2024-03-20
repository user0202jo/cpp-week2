#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string randnum(){
    int randnum = 0;
    string randstring;
    
    randnum = rand() % 999;
    if(randnum < 100){
        randstring = to_string(randnum);
        if(randnum < 10){
            for(int i = 0; i < 2; i++){
                randstring.insert(0, "0");
            }
        }

        else
            randstring.insert(0, "0");
    }

    else
        randstring = to_string(randnum);


    return randstring;
}