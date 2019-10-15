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
// Gaddis: Problem 6.18
// Paint Job estimator
// Input from user:
// Number of rooms (!! >= 1 !!)
// Price of paint/gallon (!! >= $10.00 !!)
// Square footage of room (!! > 0 !!)
// Fixed:
// For 110 sq feet of wall -> 1 gallon paint 8 hours labor
// Labor rate = $25.00/hour
// Output
// Number of gallons of paint required
// Hours of labor
// Cost of paint
// Labor cost
// Total cost of job

#include <iomanip>
#include <iostream>

using namespace std;

//LOCAL FUNCTION PROTOTYPE
void   doIntro(); //Introduce the program's purpose
int    getNumberRooms(); //Get number of rooms to be painted 
double getRoomSqrFt(int passNumberRooms);//For each room, prompt user for the square footage
double getPaintPrice(); //price of paint
double calcPaint(double passSqrFeet); //calculate cost of paint
double calcLabor(double passSqrFeet); //calculate labor cost
//OVERLOADED FUNCTIONS
bool doValidate(double passInput); //validate input paint price >= 10.00
bool doValidate(int passInput); //validate input  > 0


int main(int argc, char const *argv[])
{                      
    //VARIABLES LOCAL TO MAIN
    const double                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            e LABOR_CST_HOUR = 25.00,     //labor fixed at $25.00
                 PAINT_SQR_FOOT = 1.0/110.0, //paint 1gal/110sq_ft
                 HOURS_SQR_FOOT = 8.0/110.0; //hours 8hrs/110sq_ft
    
    double costOfPaint   = 0.00,
           totalSqrFoot  = 0.00;

    int sqrFeetRooms = 0, //Square feet of rooms to paint
        numberRooms  = 0;  

    cout << fixed << setprecision(2);
    doIntro();
    numberRooms = getNumberRooms();
    costOfPaint = getPaintPrice();
    cout << "Price of paint " << costOfPaint << " number of rooms " << numberRooms << endl;
    //getRoomSqrFt(numberRooms);
    return 0;
}

//LOCAL FUNCTION DECLARATIONS
void   doIntro()
{//Introduce the program's purpose
    cout << setfill('*') <<  setw(60) << '*' << endl;
    cout << "This program takes in the number of rooms to be painted." << endl;
    cout << "The cost per gallon of the paint used and returns itemized bill." << endl;
    cout << setfill('*') <<  setw(60) << '*' << endl << endl;
}

int getNumberRooms()
{//Get number of rooms to be painted
    int numRooms = 0;

    do
    {
        cout << "Enter the number of rooms to be painted:\n";
        cin >> numRooms;

        if (!(doValidate(numRooms))) {
            cout << "Invalid number of rooms. Must be greater or equal to one\n";
        }
    } while (!(doValidate(numRooms)));

    return numRooms;
}

double getRoomSqrFt(int passNumberRooms)
{//For each room, prompt user for the square footage
    double  sqrFootage      = 0.0,
            totalSqrFootage = 0.0;

    for (int i = 1; i <= passNumberRooms; i++)
    {
        cout << "Enter square footage of room " << i << endl;
        cin >> sqrFootage;

        if (!(doValidate(int(sqrFootage)))) {
            do
            {
                cout << "Cannot have a negative value for square footage!\n";
                cout << "Enter square footage of room " << i << endl;
                cin >> sqrFootage;
            } while (!(doValidate(int(sqrFootage))));
            
        }

        totalSqrFootage = totalSqrFootage + sqrFootage;
    }
    
    return totalSqrFootage;
}

double getPaintPrice()
{//price of paint
    double paintPrice = 0.0;
    do
    {
        cout << "Enter the price per gallon of the paint:\n";
        cin >> paintPrice;

        if (!(doValidate(paintPrice))) {
            cout << "Invalid price. Must be greater or equal to $10.00\n";
        }
    } while (!(doValidate(paintPrice)));
    
    return paintPrice;
}

double calcPaint(double passSqrFeet)
{//calculate cost of paint

}

double calcLabor(double passSqrFeet)
{//calculate labor cost

}

bool doValidate(double passInput)
{
    //Ensure non-negative integer values
    if (passInput >= 10.00){
        return  true;
    }else {
        return false;
    }
}

bool doValidate(int passInput)
{
    //Ensure non-negative values
    if (passInput > 0){
        return  true;
    }else {
        return false;
    }
}