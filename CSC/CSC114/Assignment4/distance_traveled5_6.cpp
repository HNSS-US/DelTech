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
//  Chapter 5 problem 6
//  STARTING OUT WITH C++ 
//  From Control Structures through Objects 
//  NINTH EDITION 
//  By Tony Gaddis 
//  of Haywood Community College
//  Distance traveled is found by
//  distance = speed * time
//  Example: train travels 40 mph for 3 hours
//  distance = 40 * 3 = 120
//  Program requests: speed and hours traveled.
//  Loop distance travled per hour
//  Example
//  What is the speed of the vehicle in mph? 40
//  How many hours did it travel? 3
//  Hour        Distance Traveled
//  -----------------------------
//  1           40
//  2           80
//  3           120
//  Input validation: Do not accept negative number for speed.
//  Time traveled is >= 1

#include <iomanip>  //setw, setfill
#include <iostream> //cout, endl
using namespace std;

int main()
{
    double mph = 0,
           hours_traveld = 0;
    
    cout << "This program requests the speed travled in miles per hour.\n";
    cout << "Then requests the number of hours traveled.\n";
    cout << "Using the formula distance = speed * time\n";
    cout << "The program shows the distance traveled per hour.\n";
    

    //enforce no negative mph
    do
    {
        cout << setfill('*') << setw(60) << '*' << endl;
        cout << "What is the speed of the vechicle in mph?\n";
        cin >> mph;
        
        if (mph < 0)
        {
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << "SPEED CANNOT BE A NEGATIVE NUMBER\n";
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << endl;
        }
    
    } while (mph < 0);
    //enforce no negative time traveled
    do
    {
        cout << "How  many hours has it traveled?\n";
        cin >> hours_traveld;

        if (hours_traveld < 0)
        {
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << ("HOURS TRAVELED CANNOT BE A NEGATIVE NUMBER\n");
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << endl;
        }
    } while (hours_traveld < 0 );

    cout << setfill('-') << setw(60) << ('-') << endl;
    cout << setfill(' ');
    cout << "Hour" << setw(33) << "Distance Traveled" << endl;
    cout << setfill('_') << setw(60) << ('_') << endl;
    cout << setfill(' ');

    for (int i = 1; i <= hours_traveld; i++)
    {
        //cout << i << setw(20) << left << (mph * i) << endl;
        cout << fixed;
        cout << setw(20) << left << i <<  setw(10) << left << (mph * i) << endl;
    }
    
    cout << setfill('_') << setw(60) << ('_') << endl;
    
    return 0;
}
