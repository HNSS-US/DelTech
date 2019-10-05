// The MIT License (MIT)

// Copyright (c) 2019 James J. Warrington

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.
// Purpose:
// Problem 5.20 Random Number Guessing Game
// 1. Generate a random number.
// 2. Prompt user to guess the number.
// 3. Inform user if guess is too high or too low
// 4. Loop until guess is correct.

#include <iostream> //cout, cin, endl
#include <stdlib.h> //srand (random seed), rand (random number generator)
#include <iomanip> //setw, setfill
#include <time.h>   //time
using namespace std;

//Local procedure
void doIntroduction(int passLowEnd, int passHighEnd);
void playGuessNumber(int passLowEnd, int passHighEnd);

int main()
{
    //Local variables
    //Game set to numbers 
    //between lowEnd and highEnd
    int lowEnd  = 1,
        highEnd = 20;

    doIntroduction(lowEnd, highEnd);
    playGuessNumber(lowEnd, highEnd);
    
    return 0;
}

void doIntroduction(int passLowEnd, int passHighEnd)
{
    cout << setfill('<') << setw(60) << '>' << endl;
    cout << "This program plays a game of guessing a number.\n";
    cout << "The numbers to choose are between " << passLowEnd << " to " << passHighEnd << ".\n";
    cout << "The program continues until the correct number is guessed.\n";
    cout << setfill('>') << setw(60) << '<' << endl << endl;
}

void playGuessNumber(int passLowEnd, int passHighEnd)
{
    int numberToGuess = 0, //calculated
        numberGuessed = 0, //user input
        countGuesses  = 0, //counter
        lowGuess      = passLowEnd, //initalize low guess number
        highGuess     = passHighEnd; //initalized high guess number

    //initialize random seed using time
    //function void srand (unsigned int seed)
    //gives the number of seconds since 1970-01-01
    //What happens when we run out of
    //signed 32-bit integer on 2038-01-19?
    srand(time(NULL));

    //guess number between passLowEnd to passHighEnd
    //int rand (void) Returns a pseudo-random integral 
    //number in the range between 0 and 
    //RAND_MAX.(guaranteed to be at least 32767 
    //on any standard library implementation)
    //pseudo-random numbers in a determined range 
    //using rand is to use the modulo of the returned 
    //value by the range span and add the initial value of the range:
    numberToGuess = rand() % passHighEnd + passLowEnd;
    
    //uncomment for unit testing
    //cout << "The number to guess is : " << numberToGuess << endl;

    //begin game
    cout << "Enter a number between " << passLowEnd << " and " << passHighEnd << ".\n";
    do
    {   
        cout << "Guess: ";
        cin >> numberGuessed;
        if (numberGuessed < numberToGuess) {
            cout << numberGuessed << " is too low\n";
            cout << "Hint: try a number between " << numberGuessed << " and " << highGuess << ".\n";
            lowGuess = numberGuessed;
        } else if (numberGuessed > numberToGuess) {
            cout << numberGuessed << " is too high\n";
            cout << "Hint: try a number between " << lowGuess << " and " << numberGuessed << ".\n";
            highGuess = numberGuessed;
        }
        countGuesses++;
    } while (numberToGuess != numberGuessed);

    cout << "!!!!!!Congratulations You won in " << countGuesses <<  " guesses!!!!!!\n";
}