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
//  Chapter 5 problem 5
//  STARTING OUT WITH C++ 
//  From Control Structures through Objects 
//  NINTH EDITION 
//  By Tony Gaddis 
//  of Haywood Community College
//  Membership fee increase
//  Current fee for country club is $2500 per year
//  Fees will increase by 4% for the next 6 years
//  Show the increase per year.

#include <iostream> // cout, endl
#include <iomanip> // setfill, setw, setprecision
#include <math.h>  //pow
using namespace std;

int main()
{
    const int years_inc = 6; //duration of price increase
    
    int curr_year = 2019; // today's year
    
    double current_fee = 0.00,    //variable to track yearly fee
           initial_fee = 2500.00, //current membership fee
           percnt_inc = 0.04;     //percent change

    cout << setfill('=') << setw(53) << ('=') << endl;
    cout << "At the end of this year, " << curr_year;
    cout  <<" , the $" << initial_fee << " per \n";
    cout << "year membership fee will increase.\n";
    cout << "The increase is " << (percnt_inc * 100);
    cout  << "% per year for the next " << years_inc << " years.\n";
    cout << "The new fee per year is as follows:\n";
    cout << setw(53) << ('=') << endl;

    for (int i = 1; i <= years_inc; i++)
    {
        cout << "In " << (curr_year + i) << " the membership fee will be $" << setprecision(2);
        //cout << fixed << (current_fee = current_fee + (current_fee * percnt_inc)) << endl;
        //Using FV = P(1 + r)^y
        cout << fixed << (current_fee = (initial_fee * pow ((1 + percnt_inc),i))) << endl;
    }
    cout << setw(53) << ('=') << endl;
    return 0;
}
