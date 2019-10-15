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
// Gaddis Programming Challenges
// 6.2) Celsius Temperature Table
// Using C = 5/9(F-32)
// where C is tempature Celsius
// and   F is tempature Fahrenheit
// create function 
// double celsuis(passTempFhrnht)
// loop from 0 to 20 degrees Celsius
// *******Copy and paste celsisu_fahrenheit_5.12.cpp******


#include <iostream> //cout, endl
#include <iomanip>  // setfill, setw
using namespace std;

// LOCAL FUNCTION PROTOTYPES
void printProgramIntro(int passStrtTemp, int passEndTemp);
double celsius(double passTmpFhrnht);
void printConvTable(int passStrtTemp, int passEndTemp);

int main()
{
    //LOCAL VARIABLES
    int strtTemp = 0,   //starting range to calcuate celsius temp
        endTemp = 20;  //ending   range to calcuate celsius temp

    printProgramIntro(strtTemp, endTemp);
    printConvTable(strtTemp, endTemp);
    return 0;
}

//LOCAL FUNCTION DEFINITIONS
void printProgramIntro(int passStrtRange, int passEndRange)
{
    cout << setfill('*') <<  setw(60) << '*' << endl;
    cout << "This program prints the tempature from " << passStrtRange;
    cout << " to " << passEndRange << " degrees\n";
    cout << "Fahrenheit next to its degrees Celsius equivalent using\n";
    cout << "the formula C = 5/9(F - 32)\n";
    cout << "Where F is degrees Fahrenheit and C is degrees Celsius.\n";
    cout << setfill('*') <<  setw(60) << '*' << endl;
}

double celsius(double passTmpFhrnht)
{
    //Convert
    //From:    degrees Fahrenheit
    //To:      degrees Celsius
    //Using:   C = (5/9) * (F - 32)
    //Called from
    //printConversionTable
    
    double  fhrnhtMulti = 5.00/9.00, //Value from formula
            tempCelsius; //Calculated

    const double TEMP_SUB = 32.00; //Value from formula

    tempCelsius = fhrnhtMulti * (passTmpFhrnht - TEMP_SUB);
    return tempCelsius;
}

void printConvTable(int passStrtTemp, int passEndTemp)
{
    //Call function celsius and print results

    cout << fixed << setprecision(2);
    for (int i = passStrtTemp; i <= passEndTemp; i++)
    {
        cout << setfill(' ') << setw(4) << i << "\u2109"  << setw(5);
        cout << " = " << celsius(i) << "\u2103" << endl;
    }

    cout << setfill('*') <<  setw(60) << '*' << endl;
    
}