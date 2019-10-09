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

//From Bjarne Stroustrup "Swan Book" Chapter 4 Computation
//4.4.2 Iteration

#include "../include/std_lib_facilities.h"
#include <iostream>


//Local procedures and Local functions
void printSquares();
void printPyramidScheme();
void charToInt();
void tstForSquares();
void forCharToInt();
int square(int passNumber);
void drill1While();
int main(int argc, char const *argv[])
{
    /*
    printSquares();
    cout << endl;
    cout << "Pyramid scheme\n";
    printPyramidScheme();
    cout << "Convert char to int equvialent\n";
    charToInt();
    tstForSquares();
   forCharToInt();
   */
    drill1While();
    return 0;
}

void drill1While()
{
    char userInput = 'a',
         userExit  = 'a';

    int  intInput1 = 0,
         intInput2 = 0;

    
    //while(userInput != '|' )
    //{
        cout << "Enter two integers"
        cin >> intInput1 >> intInput2 >> userExit;
        cout << "First " << intInput1 << "Second " << intInput2 << "Third " << userExit << endl;
        
    //}
    
}

void forCharToInt()
{
    const int UPPER_CASE = 32;
    for (int i = 97; i < 123; i++)
    {
        cout << char(i) << '\t'  << int(char(i)) << '\t';
        cout << char(i-UPPER_CASE) << '\t' << int(char(i-UPPER_CASE)) << endl;
    }
    
}

void tstForSquares()
{
    for (int i = 0; i < 100; i+=2)
    {
        cout << i << '\t'  << square(i) << endl;
    }
    
}

void charToInt()
{
    int lttrStep = 97;

    while (lttrStep < 123)
    {
        cout << char(lttrStep) << '\t'  << int(char(lttrStep)) << endl;
        lttrStep ++;
    }

    
    /*
    cout << "char('a' + 1) " << char('a' + 1) << endl;
    cout << "Int ('b') " << int('b') << endl;
    cout << "char "
    */
    

}

void printSquares()
{
    //print squares 0-99
    int sqreNumber = 0;

    while (sqreNumber < 100)
    {
        cout << sqreNumber << '\t' << square(sqreNumber) << endl;
        sqreNumber ++;

    }
    
}

void printPyramidScheme()
{
    cout << "Find 5 people who sell for you\n";
    cout << "They find 5, how many will you get selling for you.\n";

    int salesLevel = 1;
    long double strtSalesPerson = 5;

    while (salesLevel <= 12) 
    {
        cout << "At first level " << salesLevel << " Persons selling " << strtSalesPerson << endl;
        strtSalesPerson *= strtSalesPerson;
        salesLevel ++;

    }
}

int square(int passNumber)
//finds the square of an integer
{
    return passNumber * passNumber;
}