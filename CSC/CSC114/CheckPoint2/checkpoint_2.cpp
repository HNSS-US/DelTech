#include <iostream>
using namespace std;

int main()
{
/*
    // 2.2
    cout << "Success\n";
    cout << "Success";
    cout << "Success\n\n";
    cout << "Success\n";

    // 2.3
    cout << "\n";
    cout << "The works of Wolfgang\ninclude the following";
    cout << "\nThe Turkish March" << endl;
    cout << "and Symphony No. 40 ";
    cout << "in G minor." << endl;

    // 2.6 Testing Intger for overloading
    int      tstPosInt  = 2147483647;
    int      tstNegInt  = -2147483647;
    long int tstPosLong    = 9223372036854775807;
    long int tstNegLong = -9223372036854775807;

    cout << "Positve Intger = " << tstPosInt << endl;
    cout << "Positve Intger + 1 = " << tstPosInt + 1 << endl;
    cout << "Negative Intger = " << tstNegInt << endl;
    cout << "Negative Intger - 1 = " << tstPosInt - 1 << endl;
    cout << "Positve Long = " << tstPosLong << endl;
    cout << "Positve Long + 1 = " << tstPosLong + 1 << endl;
    cout << "Negative Long - 1 = " << tstPosLong + 1 << endl;
*/
    //Integer and Long Integer Literals
    //Page 47
    long amount;
    amount = 32;

    cout << "Here is the value of amount: " << amount << endl;
    cout << "Here is the value of amount + 1: " << amount + 1 << endl;
    
    amount = 32L;
    cout << "Here is the value of amountL: " << amount << endl;
    cout << "Here is the value of amountL + 1: " << amount + 1   << endl;

    return 0;
}
