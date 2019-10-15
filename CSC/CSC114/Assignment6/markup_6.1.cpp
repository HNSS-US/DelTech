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
// 6.1) Markup
// Ask user for:
// a) Item wholesale cost
// b) Percentage Markup
// For example:
// a) Item wholesale cost = 5.00
// b) Percentage Markup   = 100%
// Result = 10.00
// Define a function called:
// a) double calculateRetail( double passPrice, double passPercent)
// return salePrice
// **** Validation: *****
// DO NOT ACCEPT NEGATIVE VALUES FOR INPUT

#include <iostream>
#include <iomanip>

using namespace std;

//LOCAL FUNCTION PROTOTYPES
void displayIntro(); //display program purpose
double getInputPrice();     //prompt user for price input
double getInputPercent();     //prompt user for percent markup
bool doValidate(double passInput); //validate input
double calculateRetail(double whlSalePrice, 
                        double prcntMakUp);  //calculate retail price

int main(int argc, char const *argv[])
{
    //LOCAL VARIABLES TO MAIN
    double  returnPrice = 0.0,
            returnPrcnt = 0.0,
            retailPrice = 0.0;
    
    cout << fixed << setprecision(2);
    displayIntro();
    returnPrice = getInputPrice();
    returnPrcnt = getInputPercent();
    retailPrice = (returnPrice * (returnPrcnt/100)) + returnPrice;
    cout << setfill('$') <<  setw(60) << '$' << endl;
    cout << "The retail price of $" << returnPrice << " at ";
    cout << returnPrcnt << "%" << " is $" << retailPrice << endl;
    cout << setfill('$') <<  setw(60) << '$' << endl;
    
    return 0;
}

//LOCAL FUNCTION BODIES
void displayIntro()
{
    cout << setfill('*') <<  setw(60) << '*' << endl;
    cout << "This program takes in the wholesale cost of an item.\n";
    cout << "Then the precent markup to apply to the cost.\n";
    cout << "Then it displays the retail price.\n";
    cout << setfill('*') <<  setw(60) << '*' << endl;
}

double getInputPrice() { 
//prompt user for price input
    //FUNCTION VARIABLE
    double whleSaleCost = 0.0;
    do
    {
        cout << "Please enter the wholesale cost:\n";
        cin >> whleSaleCost;

        if (!(doValidate(whleSaleCost))) {
            cout << "Invalid! Please enter a non negative value.\n";
        }
    } while (!(doValidate(whleSaleCost)));

}     


double getInputPercent(){
//prompt user for percent markup
    //FUNCTION VARIABLE
    double percntMarkUp = 0.0;

    do
    {
        cout << "Please enter the percent markup:\n";
        cin >> percntMarkUp;

        if (!(doValidate(percntMarkUp))) {
            cout << "Invalid! Please enter a non negative value.\n";
        }
    } while (!(doValidate(percntMarkUp)));
}

bool doValidate(double passInput)
{
    //Ensure non-negative values
    if (passInput >= 0){
        return  true;
    }else {
        return false;
    }
}
