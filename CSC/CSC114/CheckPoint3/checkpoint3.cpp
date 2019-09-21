#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    int num1 = 2987, num2 = 5,    num3 = 837,
        num4 = 34,   num5 = 7,    num6 = 1623,
        num7 = 390,  num8 = 3456, num9 = 12;
    
    cout << "Before formatting\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << num1 << " " << num2 << " " << num3 << endl;
    cout << num4 << " " << num5 << " " << num6 << endl;
    cout << num7 << " " << num8 << " " << num9 << endl;
    cout << endl;
    cout << endl;
    cout << "After formatting\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
    cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
    cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;
    cout << endl;
    cout << endl;
    cout << "Before formatting\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << num1 << " " << num2 << " " << num3 << endl;
    cout << "After formatting\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num4 << endl;
    cout << "Test variable as argument in setw()\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << setw(num2) << num1 << setw(num2) << num2 << setw(num2) << num4 << endl;
    cout << "Test feild width 2\n";
    cout << "0123456789012345678901234567890123456789\n";
    cout << setw(2) << num1 << setw(2) << num2 << setw(2) << num4 << endl;
    cout << endl;
    cout << endl;
    cout << "From cpluplus.com\n";
    cout << "0123456789012345678901234567890123456789\n";
    std::cout << std::setw(0);
    std::cout << 77 << std::endl;
    

    
    int value;
    double gregory_fractional;
    char letter;

    cout << "Enter an Integer, a double, and a character: ";
    cin >> value >> gregory_fractional >> letter;   
    cout << "Integer: " << value << endl;
    cout << "gregory_fractional: " << gregory_fractional << endl;
    cout << "Letter: " << letter << endl;
    return 0;
    
    double first, second, product;
    cout << "Please enter two numbers:\n";
    cin >> first >> second;
    product = first * second;
    cout << product;
    return 0;
    

    double numerator, denominator;
    cout << "This program shows the decimal value of ";
    cout << "a gregory_fraction.\n";
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    cout << "The decimal value is ";
    cout << (numerator/denominator) << endl;
    
    int serise;

    double gregory_estimate_pi = 4.0,
           gregory_fraction  = 0.0;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> serise;    
    } while (serise <1);
    


    for (int count = 0; count <= serise; count++)
    {
        //odd count
        if (count % 2 == 1)
        {
            
            gregory_fraction = (4/((2.0 * count) - 1));
            gregory_estimate_pi = gregory_estimate_pi + gregory_fraction;
        }
        else 
        {
            gregory_fraction = (4/((2.0 * count) - 1));
            gregory_estimate_pi = gregory_estimate_pi - gregory_fraction;
        }
        cout << "At the " << count << " Gregory Infinite serise to calculate pi estimates to:" << gregory_estimate_pi << endl;

    }
    

    int tst_7  = 7,
        tst_14 = 14,
        tst_5  = 5,
        tst_0  = 0;

    double  tst_7_0  = 7.0,
            tst_14_0 = 14.0,
            tst_5_0  = 5.0;
        
        cout << "(1) mod of 14 % 7 = " << tst_14 % tst_7 << endl;
        cout << "(2) mod of 14 % 5 = " << tst_14 % tst_5 << endl;
        cout << "(3) mod of 7 % 14 = " << tst_7 % tst_14 << endl;
        //cout << "(4) mod of 14 % (7 - 7)  = " << tst_14 % (tst_7 - tst_7) << endl;
        cout << "(5) mod of 14 % 14 = " << tst_14 % tst_14 << endl;
        cout << "(6) That's all folks\n";
    */
    enum Color { red, green, blue };
    //cout << "What color do you like, red, green, blue?\n";
     Color r = red;

        switch(r)
        {
            case red  : std::cout << "red\n";   break;
            case green: std::cout << "green\n"; break;
            case blue : std::cout << "blue\n";  break;
        }
    return 0;
}
