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

// Chapter 5. Problem 5.23
// Create a program that prints out
//+
//++
//+++
//++++
//+++++
//++++++
//+++++++
//++++++++
//+++++++++
//++++++++++
//Then prints the inverse

#include <iostream> //cout
#include <iomanip> //setfill, setw

using namespace std;

//**** Local Variables and Procedures ****
//print header for output
void printHeader();
//print triangles using two for loops
void forTriangle(int passRows);

int main()
{
    //Number of rows to print for triangle
    int endRows = 10;

    printHeader();
    forTriangle(endRows);
    //print footer
    cout << setfill('_') << setw(30) << "_" << endl << endl;

    return 0;
}

void printHeader()
{
    //print header for output
    cout << setfill('_') << setw(30) << "_" << endl;
    cout << " Pattern A" << setfill(' ') << setw(17) << "Pattern B\n";
    cout << setfill('_') << setw(30) << "_" << endl;
}

void forTriangle(int passRows)
{    //print triangles using for loops
        //control size of triangle
        for (int i = 1; i <= passRows; i++) {

            //print number of + for triangle A
            //for every row of Triangle A
            //print that many + signs
            //number printed is controlled by j
            //increases by 1 per row.
            for (int j = 1; j <= i; j++) {
                cout << "+";
            }

            //print blank spaces between Triangle A and Triangle B.
            cout << setfill(' ') << setw(15 - i);

            //print number of + for triangle B
            //for every row of Triangle A
            //print the max number of + signs
            //number printed is controlled by k
            //decreases by 1 per row 
            for (int k = (passRows - i); k >= 0 ; k--) {
                cout << "+";
            }           

            //create next line in pyramid
            cout << endl;
        }
}