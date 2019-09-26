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

// CSC114
// STARTING OUT WITH C++ From Control Structures through Objects NINTH EDITION 
// By Tony Gaddis of Haywood Community College
// Problem: 4.1
// Prompt for two nubers.
//  Use conditional operator to determine the smallest and largest
#include <iostream> //cout, endln
#include <iomanip>  //setfill, setw
using namespace std;

int main()
{ 
    int num1 = 0, num2 = 0;

    cout << setfill('^') << setw(40) << '^' << endl;
    cout << "This program asks for two numbers as input." << endl;
    cout << "It then compares the two numbers and determines" << endl;
    cout << "which is largest and smallest  (for integers).\n";
    cout << "Please enter first integer:\n";
    cin >> num1;
    cout << "Please enter second integer\n";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " Is greater than " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " Is less than " << num2 << endl;
    }
    else
    {
        cout << num1 << " Is equal to " << num2 << endl;
    }
    
    cout << setfill('^') << setw(40) << '^' << endl;

    return 0;
}
