#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

struct puzzle{ //For each individual letter of the puzzle
    char letter; //The letter in question
    bool inPuzzle; //Is puzzle.letter actually in the puzzle?
};

puzzle answer[]; 



int main(){

    cout << "===== Hangman =====" << endl;
    
    //We need to select the word from a seperate file
    //We'll break the word into a struct array

    //-1 = false
    //0 = unknown
    //1 = true

    int exitCon = 0;
    while(exitCon == 0){
        char letterSelect; 
        cout << "Please pick a letter" << endl;
        
        
    }
    return 0;
}