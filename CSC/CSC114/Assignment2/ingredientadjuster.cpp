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
// Problem 3.6
/*
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, then displays the number
of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream> // std::cout, std::endl 
#include <iomanip>  // std::setfill, std::setw
using namespace std; // saves from having to type std::cout

int main()
{
    //variable declarations
    double cupSgr = 1.5, cupBtr = 1, cupFlr = 2.75, 
           ozsSgr = 0,   ozsBtr = 0, ozsFlr = 0,    
           rtoSgr = 0,   rtoBtr = 0, rtoFlr = 0,
           newNumCke = 0;

    const int ozsInCup  = 8;
    const int begNumCke = 48;
    
    // Prompt for input
    cout << setfill('*') << setw(60) << "*\n";
    cout << "  This cookie recipe makes 48 cookies given the following:\n";
    cout << "  1.5  cups of sugar. " << endl;
    cout << "  1    cups of butter." << endl;
    cout << "  2.75 cups of flour. " << endl;
    cout << setfill('-') << setw(60)  << "\n";
    cout << "  Enter the number of cookies you wish to make.\n";
    cout << "  then press the enter key:" << endl;
    cout << setfill('*') << setw(60) << "*\n";
    cin >> newNumCke;

    //convert cups to ounces
    ozsSgr = cupSgr * ozsInCup;
    ozsBtr = cupBtr * ozsInCup;
    ozsFlr = cupFlr * ozsInCup;

    // ratio of ingredents to cookies
    rtoSgr = (ozsSgr/begNumCke);
    rtoBtr = (ozsBtr/begNumCke); 
    rtoFlr = (ozsFlr/begNumCke);

    //calculate new values
    cupSgr = ((rtoSgr * newNumCke)/ozsInCup);
    cupBtr = ((rtoBtr * newNumCke)/ozsInCup);
    cupFlr = ((rtoFlr * newNumCke)/ozsInCup);

    // Display new recipe
    cout << setfill('*') << setw(40) << "*\n";
    cout << "  To make " << newNumCke << " cookies you will need\n";
    cout << "  to change the recipe as follows:" << "\n";
    cout << "  For cups of sugar:  " << setprecision(2) << fixed << cupSgr << "\n";
    cout << "  For cups of butter: " << setprecision(2) << fixed << cupBtr << "\n";
    cout << "  For cups of flour:  " << setprecision(2) << fixed << cupFlr << "\n";
    cout << setfill('*') << setw(40) << "*\n";

    return 0;
}
