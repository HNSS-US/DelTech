// The MIT License (MIT)
// Copyright (c) 2019 NAME:James J. Warrington
// Email: support@hnss.us
// Purpose: Programing challenge 5 page 82 from 
// STARTING OUT WITH C++
// From Control Structures
// through Objects
// NINTH EDITION
// Tony Gaddis
// Haywood Community College
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


#include <iostream>
using namespace std;

int main()
{
    int varNum1    = 28,
        varNum2    = 32,
        varNum3    = 37,
        varNum4    = 24,
        varNum5    = 33,
        varDivisor = 5;

    float sum = varNum1 + varNum2 + varNum3 + varNum4 + varNum5;
    cout << "The sum of the five variables is:" << sum << endl;

    float varAvg = (sum/varDivisor);
    cout << "The average of the variables is:" << varAvg << endl;

    return 0;
}
