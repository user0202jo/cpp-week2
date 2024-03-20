#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string randnum(){
    int randnum = 0;
    string randstring;
    string stringzero = "0";
    
    randnum = rand() % 999;
    if(randnum < 100){
        randstring = to_string(randnum);
        stringzero.append(randstring);
    }
    randstring = to_string(randnum);

    return randstring;
}