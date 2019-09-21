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
//  STARTING OUT WITH C++ 
//  From Control Structures through Objects 
//  NINTH EDITION 
//  By Tony Gaddis of Haywood Community College
//  5.1 Sum of Number
//  Write a program that asks user for positive integer value.
//  Loop from 1 to integer given showing the sum up to the given value.
//  Input validation do not accept negative numbers.
//  Note by definition zero is neither positive or negative.

#include <iostream> //cout, endl
#include <iomanip> //setfill

using namespace std;

int main()
{

    int integer_given,
        final_sum = 0,
        gauss_sum = 0;

    cout << setfill('-') << setw(60) << ('-') << endl;
    cout << "This program requests a positive integer as input.\n";
    cout << "The program sums all integers from 1 up to the integer entered.\n";
    cout << setfill('-') << setw(60) << ('-') << endl;

    do
    {
        cout << "Please enter a positive integer:\n";
        cin >> integer_given;
   
        if (integer_given <= 0)
        {
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << "THE VALUE MUST BE GREATER THAN ZERO!!\n";
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << endl << endl << endl;
            cout << setfill('-') << setw(60) << ('-') << endl;
        }
        
    } while (integer_given <= 0);
    
    //Using for loop.
    for (int i = 1; i <= integer_given; i++)
    {
        //cout << "Final sum = " << final_sum << " + " << i << endl;
        final_sum = final_sum + i;
        //cout << "Final Sum: " << final_sum << endl;
    }
    cout << setfill('*') << setw(60) << ('*') << endl;
    cout << "Using a for loop:\n";
    cout << "The sum of the intgers from 1 to " << integer_given << " is " << final_sum << endl;
    cout << setfill('-') << setw(60) << ('-') << endl;
    
    //Compare Gauss formula
    cout << "Using Gauss formula, (N(N+1)/2) where N is a positive intger\n";
    gauss_sum = (((integer_given)*(integer_given + 1))/2);
    cout << "The sum of the intgers from 1 to " << integer_given << " is " << gauss_sum << endl;

    if ( final_sum == gauss_sum )
    {
        cout << "The methods match!\n";
    } else
    {
        cout << "The methods do not match!\n";
    }

    return 0;
}
