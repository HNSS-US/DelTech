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

// Purpose: This program was written for exam 1 in CSC114
/*
Problem Statement:Develop and test a program to perform basic math 
calculations on two integers.
Prompt the user for two integers.  
You can assume the values entered are valid ints.
(***** DO NOT NEED TO VERIFY DATA TYPE *****)
Display a menu that prompts the user to enter one 
of the following characters:
    ●‘A’ to Add
    ●‘S’ to Subtract
    ●‘M’ to Multiply
    ●‘D’ to Divide 
(****DATA VAILD DATATION (but not by zero)
The menu must work regardless of whether the user 
enters an upper or lower-case character.
(****USE to_upper ‘a’ is the same as ‘A’, etc.)
If an invalid menu choice is entered,
then program should inform the user and exit.
(**** IF NOT A S ... exit) 
(**** NO LOOP NEEDED ****)
The divide feature should check if the second integer 
is zero and not perform the division calculation.
if it is.
(**** EXIT ON DIV BY )
The divide feature should calculate a decimal 
result rounded to 2-digits, 
(**** TAKE IN INT AND RETURN FLOAT.)
(**** SET PRECISION TO TWO)
so “2 / 3 = 0.67”Submission:Upload the .cpp file for your program to D2L* Please test your code before submitting!

*/

#include <iostream> //cout, endl
#include <iomanip> //setfill
#include <chrono> //high_resolution_clock, duration_cast
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;

//local functions and procedures
int displayCalulatorMenu(); 
int getInputFromUser();
int verifyInputData(int passedFirstNumberEntered, int passedSecondNumber);
int doAddition(int passedFirstNumber, int passedSecondNumber);
int doSubtraction(int passedFirstNumber, int passedSecondNumber);
int doDivison(int passedFirstNumber, int passedSecondNumber);
int doMultiplication(int passedFirstNumber, int passedSecondNumber);


int main(int argc, char const *argv[])
{
    //local variable
    int additionValueReturned      = 0,
        subtractionValueReturned    = 0,
        multiplactionValueReturned = 0,
        divisionValueReturned      = 0,
        firstNumber = 0,
        secondNumber = 0;

    //set precision of numbers
    cout << fixed << setprecision(2);

    //START PROCESSING
    switch (displayCalulatorMenu())
    {
    case 1:
        cout << "Please enter the first number\n";
        cin >> firstNumber;
        cout << "Please enter the second number\n";
        cin >> secondNumber;
        additionValueReturned = doAddition(firstNumber, secondNumber);
        cout << firstNumber << " + " << secondNumber << " = " << additionValueReturned << endl;
        break;

    case 2:
        cout << "Please enter the first number\n";
        cin >> firstNumber;
        cout << "Please enter the second number\n";
        cin >> secondNumber;
        subtractionValueReturned = doSubtraction(firstNumber, secondNumber);
        cout << firstNumber << " - " << secondNumber << " = " << subtractionValueReturned << endl;
        break;

    case 3:
        cout << "Please enter the first number\n";
        cin >> firstNumber;
        cout << "Please enter the second number\n";
        cin >> secondNumber;
        multiplactionValueReturned = doMultiplication(firstNumber, secondNumber);
        cout << firstNumber << " * " << secondNumber << " = " << multiplactionValueReturned << endl;
        break;

    case 4:
        cout << "Please enter the first number\n";
        cin >> firstNumber;
        cout << "Please enter the second number\n";
        cin >> secondNumber;  
        divisionValueReturned = doDivison(firstNumber, secondNumber); 

        if (divisionValueReturned > 0)
        {
            cout << firstNumber << " / " << secondNumber << " = " << divisionValueReturned << endl;
        }
        else
        {
            cout << "ERROR DIVISON BY ZERO IS INVALID" << endl;
        }
        
        break;

    default:
        "WARNING YOU ENTERED AN INVAILD OPTION. EXITING\n";
        break;
    }
    
    return 0;
}


//LOCAL FUNCTION AND PROCEDURES
int displayCalulatorMenu()
{
    //local variable
    char inputMathOperation;
    cout << "This program performs basic math on two integers:\n";
    cout << "Please enter the calculation you need:\n";
    cout << "For Addition enter       A\n";
    cout << "For Subtraction enter    S\n";
    cout << "For Multiplication enter M\n";
    cout << "For Division enter       D\n";
    cin >> inputMathOperation;

    if (toupper(inputMathOperation) == 'A')
    {
        return 1;
    } else if (toupper(inputMathOperation) == 'S') 
    {
        return 2;
    } else if (toupper(inputMathOperation) == 'M')
    {
        return 3;
    }
    else if (toupper(inputMathOperation) == 'D')
    {
        return 4;
    }
    else
    {
        return 5;
    }
}

int doAddition(int passedFirstNumber, int passedSecondNumber)
{ 
    int sum = 0;
    sum = passedFirstNumber + passedSecondNumber; 
    return sum;
}

int doSubtraction(int passedFirstNumber, int passedSecondNumber)
{
    int diff = 0;
    diff = passedFirstNumber - passedSecondNumber; 
    return diff;
}

int doMultiplication(int passedFirstNumber, int passedSecondNumber)
{
    int prod = 0;
    prod =  passedFirstNumber * passedSecondNumber; 
}

int verifyInputData(int passedSecondNumber)
{
    if (passedSecondNumber == 0)
    {
        return 0;
    }

}

int doDivison(int passedFirstNumber, int passedSecondNumber)
{
    int quot = 0;
    if (verifyInputData(passedSecondNumber) > 0)
    {
        quot = (passedFirstNumber/passedSecondNumber);
        return quot;
    } else
    {
        return quot; 
    }
    
} 