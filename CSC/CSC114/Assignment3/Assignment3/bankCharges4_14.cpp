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

/* code */

// Bank Charges
// A bank charges $10 per month plus fees:
// $0.10 checks < 20
// $0.08 checks 20 - 39
// $0.06 checks 40 - 59
// $0.04 checks >= 60
// If balance < $400, fee of $15 added
// before any check fees are added.
// User inputs: 
//             current balance 
//             number of checks
// Input validation:
// Do not accept negative number of checks.
// Warn on negative opening balance.

#include <iostream> // cout, endl
#include <iomanip> // setfill
using namespace std; //saves std::

int main()
{
    //Delarations
    double opnbalnce    = 0.00,  // input frm user
           endbalnce    = 0.00,  // calc value
           chckfeechrgd = 0.0,   // calc value
           chckfeernge  = 0.0;   // variable for fee range chrgd

    int numchcks  = 0;           // number of chcks written 

    const double MINIMUM_BAL = 400.00, // min bal to avoid LOWBAL_FEE
                 MONTHLY_FEE = 10.00,  // mnthly maintaince fee
                 LOWBAL_FEE  = 15.00, // fee bal < 400.00
                 CHECK_FEE10 = 0.10,   // fee chcks wrttn < 20
                 CHECK_FEE08 = 0.08,   // fee chcks wrttn 20-39
                 CHECK_FEE06 = 0.06,   // fee chcks wrttn 40 - 59
                 CHECK_FEE04 = 0.04;   // fee chcks wrttn >= 60

    const int CHECK_LEVEL60  = 60,    // checks >= 60
              CHECK_LEVEL40  = 40,    // checks 40 - 59
              CHECK_LEVEL20  = 20;    // checks 20 - 39 
        

    char runcalc      = 'N',               // do loop control
         lowbalfeemsg = ' ';

    //Start Program
    cout << setfill('$') << setw(60) << ('$') << endl;

    //configure output
    cout << fixed << setprecision(2) << endl;

    // Request user input
    do // while (toupper(runcalc) != 'Y') 
    {
        cout << "Please enter the current balance in 00.00 format:\n";
        cin >> opnbalnce;
        
        if (opnbalnce < 0)
        {
            cout << setfill('!') << setw(60) << ('!') << endl;
            cout << "WARNING ACCOUNT IS OVER DRAWN CURENT BALANCE IS: $" << opnbalnce << endl;
            cout << "THE PROGRAM WILL CONTINUE\n";
            cout << setfill('!') << setw(60) << ('!') << endl;
        }

        do //while (numchcks < 0)
        {
            cout << "Please enter the number of checks written:\n";
            cin >> numchcks;

            if (numchcks < 0)
            {
                cout << setfill('?') << setw(60) << ('?') << endl;
                cout << "PLEASE RETRY, THE NUMBER OF CHECK CANNOT BE A NEGATIVE NUMBER" << endl;
            }  
        
        } while (numchcks < 0);

        cout << setfill('?') << setw(60) << ('?') << endl;
        cout << "You have entered the following values:\n";
        cout << "The current balance is: $"  << opnbalnce << endl;
        cout << "The number of checks written is: " << numchcks << endl;
        cout << "Is this correct? y/n\n" ;
        cin >> runcalc;
        cout << setfill('?') << setw(60) << ('?') << endl;

        if (toupper(runcalc) == 'N')
        {
            cout << "Restarting...\n";
        }
        
    } while (toupper(runcalc) != 'Y');
    
    // Perform calculation for check writting fees
    // checks >= 60
    if (numchcks >= CHECK_LEVEL60)
    {
        chckfeechrgd = numchcks * CHECK_FEE04;
        chckfeernge  = CHECK_FEE04; 
    }
    // checks 40 - 59
    else if (numchcks >= CHECK_LEVEL40)
    {
        chckfeechrgd = numchcks * CHECK_FEE06;
        chckfeernge  = CHECK_FEE06;        
    }
    // checks 20 - 30
    else if (numchcks >= CHECK_LEVEL20)
    {
        chckfeechrgd = numchcks * CHECK_FEE08;
        chckfeernge  = CHECK_FEE08;
    }
    // checks < 20
    else
    {
        chckfeechrgd = numchcks * CHECK_FEE10;
        chckfeernge  = CHECK_FEE10;        
    }    

    
    cout << endl << endl << endl;
    cout << setfill('*') << setw(70) << ('*') << endl;
    
    //Preform calculation for ending balance
    if (opnbalnce < MINIMUM_BAL )
    {
        lowbalfeemsg = 'Y';
        endbalnce = opnbalnce - chckfeechrgd - LOWBAL_FEE - MONTHLY_FEE;
    
    }
    else
    {
        lowbalfeemsg = 'N';
        endbalnce = opnbalnce - chckfeechrgd - MONTHLY_FEE;
    }    
   
    cout << "Opening balance on the account: $" << opnbalnce << endl;
    cout << "Check writting fee on " << numchcks << " checks at $" << chckfeernge ;
    cout << " per check: $" << chckfeechrgd << endl;
    cout << "Monthly maintenance fee : $" << MONTHLY_FEE << endl;

    switch (lowbalfeemsg)
    {
        case 'Y':
                cout << "Since opening balance is below $" << MINIMUM_BAL;
                cout << " pay low balance fee: $" << LOWBAL_FEE << endl;
                cout << "This gives an ending balance of: $" << endbalnce << endl;
                cout << "Calculated as follows: $" << opnbalnce << " - $" << chckfeechrgd;
                cout << " -$" << LOWBAL_FEE << " - $" << MONTHLY_FEE << " = $" << endbalnce << endl;
                break;

        case 'N':
                cout << "Since open balance is above $" << MINIMUM_BAL;
                cout << " there is no low balance fee." << endl;
                cout << "This gives an ending balance of: $" << endbalnce << endl;
                cout << "Calculated as follows: $" << opnbalnce << " - $" << chckfeechrgd;
                cout << " - $" << MONTHLY_FEE << " = $" << endbalnce << endl;
                break;
    
        default:
                cout << "PLEASE REPORT ERROR CODE WTF:404 TO SUPPORT!" << endl;
                break;
    }  
    cout << setfill('*') << setw(70) << ('*') << endl;
    return 0;
}