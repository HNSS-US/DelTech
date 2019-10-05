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
//  Use a loop to convert the range of tempatures from 0 - 20 degrees Celsius
//  to its Fahrenheit equivalant.

#include <iostream> //cout, endl
#include <iomanip>  // setfill, setw
using namespace std;

// Local Procedures
void printProgramInrodution();
void printCelsiusFahrenheitTable();

int main()
{
    printProgramInrodution();
    printCelsiusFahrenheitTable();
    return 0;
}

void printProgramInrodution()
{
    cout << setfill('*') <<  setw(60) << '*' << endl;
    cout << "This program prints the tempature from 0 to 20 degrees\n";
    cout << "Celsius next to its degrees Fahrenheit equivalent using\n";
    cout << "the formula F = (C * 9/5) + 32\n";
    cout << "Where F is degrees Fahrenheit and C is degrees Celsius.\n";
    cout << setfill('*') <<  setw(60) << '*' << endl;
}

void printCelsiusFahrenheitTable()
{
    //Convert 0 to 20 degrees celsius
    //to degrees Fahrenheit 

    //convert conversion multiple to double
    int maxDegreesCelsius = 20;

    //Values from formula
    double celsiusConverter = 9.00/5.00;
    const double TEMP_ADD = 32.00;

    cout << fixed << setprecision(2);
    for (int i = 0; i <= maxDegreesCelsius; i++)
    {
        cout << setfill(' ') << setw(4) << i << "\u2103"  << setw(5);
        cout << " = " << ((i * celsiusConverter) + TEMP_ADD) << "\u2109" << endl;
    }

    cout << setfill('*') <<  setw(60) << '*' << endl;
    
}