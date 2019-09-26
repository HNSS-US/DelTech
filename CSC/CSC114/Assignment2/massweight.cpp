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
//
// CSC114
// STARTING OUT WITH C++ From Control Structures through Objects NINTH EDITION 
// By Tony Gaddis of Haywood Community College
// Problem: 4.6
/* Mass and Weight
   Mass is measured in kilograms and weight in Newtons
   Weight = mass * 9.8
   Prompt user for an objects mass and the calculate its weight.
   If objects weight > 1000. Display too heavy message.
   If objects weight < 10. Display too light message.
*/

#include <iostream>  // cout, endl
#include <iomanip>   // setfill, setw
using namespace std; // saves having to use std::

int main()
{
    double mass = 0,
           weight = 0;
    const double gravity = 9.8;

    bool done; // used by do loop

    cout << setfill('=') << setw(60) << '=' << endl;
    cout << "To find the weight of an object" << endl;
    cout << "this program uses  the formula:" << endl;
    cout << "weight = mass * 9.8" << endl;
    cout << "This derives from Newton's Second Law\n";
    cout << "F=ma meaning F(force) = m(mass) times a(acceleration).\n";
    cout << "For the acceleration of the object, 9.8 is earth's gravity.\n";
    //cout << "Please enter the objects mass:";
    //cin >> mass;
    cout << setw(60) << '=' << endl;
    
    cout << endl << endl;
    cout << setw(60) << '=' << endl;
    do
    {
        cout << "Please enter the objects mass:";
        cin >> mass;
        weight = mass * gravity;

        if (weight > 1000)
        {
            cout << "The weight of the object is " << weight << endl;
            cout << "The output requires the weight to be less than 1000\n";
            cout << setfill('!') << setw(60) << '!' << endl;
            done = false;
        }
        else if (weight < 10)
        {
            cout << "The weight of the object is " << weight << endl;
            cout << "The output requires the weight to be greater than 10\n";
            cout << setfill('!') << setw(60) << '!' << endl;
            done = false;
        }
        else
        {
            cout << "The weight of the object is " << weight << endl;
            done = true;
        }
    } while (done != true);

    cout << setfill('=') << setw(60) << '=' << endl;

    return 0;
}
