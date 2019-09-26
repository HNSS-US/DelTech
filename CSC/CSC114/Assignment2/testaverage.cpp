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
// Problem 3.3
// Write a program that asks for five rest scores. 
// The program should calculate the average rest score and display it. 
// The number displayed should be formaned in fixed-point
// notation, with one decimal point of precision.

#include <iostream> // cout, endl
#include <iomanip>  // setfill, setw
using namespace std;

int main()
{
    double tstScore1 = 0.0, tstScore2 = 0.0, tstScore3 = 0.0,  
           tstScore4 = 0.0, tstScore5 = 0.0, avgGrade = 0.0;
           
           int const totTest = 5;


    cout << setfill ('*') << setw (57) << '*' << endl;
    cout << "* This program accepts five test scores "  << setfill (' ') << setw (17) << '*' << endl; 
    cout << "* then returns the average grade. "   << setw (23) << '*' << endl; 
    cout << "* Please enter your five scores, "   << setw (24) << '*' << endl;
    cout << "* separated by a space. "  << setw (33) << '*' << endl; 
    cout << setfill ('*') << setw (57) << '*' << endl;

    cin >> tstScore1 >> tstScore2 >> tstScore3 >> tstScore4 >> tstScore5;
    
    avgGrade = ((tstScore1 + tstScore2 + tstScore3 + tstScore4 + tstScore5)/totTest);

    cout << setfill('*') << setw(57) << '*' << endl; 
    cout << "The average grade for the tests is " << avgGrade << endl;
    cout << setfill('*') << setw(57) << '*' << endl;

    return 0;
}
