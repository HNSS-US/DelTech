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

//function declaration
void printbanner (string symbl, int lngth); //print custom banner
double get_input_bal(); //get user input openeing balance
int get_num_chcks(); // get user input number of chcks
//calculate check writting fee Call By Reference
//the function will take pointer type data. Pass the address of the data.
void cal_check_write_fee (int in_numchcks, double *chckfeechrgd, double *chckfee);
//charge $15.00 if open balance < $400.00
int tst_min_bal_fee(double in_opnbalnce, double in_MINIMUM_BAL);

int main()
{
    //local variable declaration
    double opnbalnce = 0.00, // Opening balance on account
           checkfee  = 0.00, // Calculated fee for checks written 
           chckrnge  = 0.00, // range of checks written deter. fee
           finalbal  = 0.00; // Calculated final balance on account
    
    int num_checks = 0;

    const double MONTHLY_FEE   = 10.00,
                 BELOW_MIN_FEE = 15.00,
                 MINIMUM_BAL   = 400.00;

    //set precision
    cout << fixed << setprecision(2);

    //print banner
    printbanner("=-=", 20);

    //get opening balance
    opnbalnce = get_input_bal();

    //get number of checks
    num_checks = get_num_chcks();

    //calculate check writting fee
    cal_check_write_fee(num_checks, &checkfee, &chckrnge);
    printbanner("=-=", 20);
    switch (tst_min_bal_fee(opnbalnce, MINIMUM_BAL))
    {
    case 0:
        finalbal = opnbalnce - MONTHLY_FEE - checkfee; 
        cout << "The final balance on the account: $" << finalbal << endl;
        cout << "This was calculated as:\n";
        cout << "Opening Balance: $" << opnbalnce << endl;
        cout << "Less monthly fee: $" << MONTHLY_FEE << endl;
        cout << "Less check writting fee: $" << checkfee << endl;
        cout << "(Calculated as " << num_checks << " checks written at $" << chckrnge << " per check.)\n";
        cout << "Totaling as $" << opnbalnce << " - $" << MONTHLY_FEE << " - $" << checkfee << " = $" << finalbal << endl;
        break;
    case 1:
        finalbal = opnbalnce - MONTHLY_FEE - BELOW_MIN_FEE - checkfee; 
        cout << "The final balance on the account: $" << finalbal << endl;
        cout << "This was calculated as:\n";
        cout << "Opening Balance: $" << opnbalnce << endl;
        cout << "Less monthly fee: $" << MONTHLY_FEE << endl;
        cout << "Less check writting fee: $" << checkfee << endl;
        cout << "(Calculated as " << num_checks << " checks written at $" << chckrnge << " per check.)\n";
        cout << "Less: $" << BELOW_MIN_FEE << " since opening balance was less than $" << MINIMUM_BAL << endl;
        cout << "Totaling as $" << opnbalnce << " - $" << BELOW_MIN_FEE << " - $" << MONTHLY_FEE << " - $" << checkfee << " = $" << finalbal << endl;
        break;
    default:
        cout << "PLEASE REPORT ERROR CODE WTF:404 TO SUPPORT!" << endl;
        break;
    }



    //print banner
    printbanner("=-=", 20);

    return 0;
}

void printbanner (string symbl, int lngth) //print custom banner
{
    for (int i = 0; i <= lngth; i++)
    {
        cout << symbl;
    }
    cout << endl;
}

double get_input_bal() //get user input openeing balance
{
    //local variable
    double bal    = 0.00;
    cout << "Please enter the opening balance on the account";
    cout << " in 0.00 format:\n";
    cin >> bal;

    
    if (bal < 0)
    {
        printbanner("!", 60);
        cout << "WARNING ACCOUNT IS OVER DRAWN CURENT BALANCE IS: $" << bal << endl;
        cout << "THE PROGRAM WILL CONTINUE\n";
        printbanner("!", 60);
    }

    return bal;
}

int get_num_chcks() // get user input number of chcks
{
    //local variable
    int numchcks = 0;

    do //while (numchcks < 0)
    {
        cout << "Please enter the number of checks written";
        cout << " as a whole number greater than zero:\n";
        cin >> numchcks;
        if (numchcks < 0)
        {
            printbanner("!?!", 20);
            cout << "PLEASE RETRY, THE NUMBER OF CHECK CANNOT BE A NEGATIVE NUMBER" << endl;
            printbanner("!?!", 20);
        }  
    
    } while (numchcks < 0);

    return numchcks; 
}

//calculate check writting fee Call By Reference
//the function will take pointer type data. Have to pass the address of the data.
void cal_check_write_fee (int in_numchcks, double *chckfeechrgd, double *chckfee) 
{
    //local variables
    const double CHECK_FEE10 = 0.10,   // fee chcks wrttn < 20
                 CHECK_FEE08 = 0.08,   // fee chcks wrttn 20-39
                 CHECK_FEE06 = 0.06,   // fee chcks wrttn 40 - 59
                 CHECK_FEE04 = 0.04;   // fee chcks wrttn >= 60

    const int CHECK_LEVEL60  = 60,    // checks >= 60
              CHECK_LEVEL40  = 40,    // checks 40 - 59
              CHECK_LEVEL20  = 20;    // checks 20 - 39

    // checks >= 60
    if (in_numchcks >= CHECK_LEVEL60)
    {
        *chckfeechrgd = in_numchcks * CHECK_FEE04;
        *chckfee    = CHECK_FEE04;

    }
    // checks 40 - 59
    else if (in_numchcks >= CHECK_LEVEL40)
    {
        *chckfeechrgd = in_numchcks * CHECK_FEE06;
        *chckfee    = CHECK_FEE06;
    }
    // checks 20 - 30
    else if (in_numchcks >= CHECK_LEVEL20)
    {
        *chckfeechrgd = in_numchcks * CHECK_FEE08;
        *chckfee      = CHECK_FEE08;
    }
    // checks < 20
    else
    {
        *chckfeechrgd = in_numchcks * CHECK_FEE10;
        *chckfee      = CHECK_FEE10;        
    }
}

//charge $15.00 if open balance < $400.00
int tst_min_bal_fee(double in_opnbalnce, double in_MINIMUM_BAL)
{
    return  (in_opnbalnce < in_MINIMUM_BAL);
}