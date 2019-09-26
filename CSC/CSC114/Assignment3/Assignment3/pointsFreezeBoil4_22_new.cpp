// Freezing point and boiling point
// Prompt user for a tempature
// show what substance would freeze vs boil
// Table
// Substance        FreezingPoint   BoilingPoint
// Ethyl Alcohol    -173            172
// Mercury          -38             676
// Oxygen           -362            -306
// Water             32             212
// Example: Enter 20 ->
//          < 32 Water Freezes
//          > 20 Oxygen Boils 
//   
#include <iostream> // cout, endl
#include <iomanip>  // setfill, setw
using namespace std;

//function declaration
void printBanner(string in_symbl, int in_lngth); //print custom banner
void printIntro(); //print introduction
int  willItFreeze(double in_tempF); //test for freezing point
int  willItBoil(double in_tempF); //test for boiling point


int main()
{
    //local variables
    double tempF  = 0.00;

    string str_freeze_msg = "",
           str_boil_msg   = "";

    //set precissson
    cout << fixed << setprecision(1);
    printBanner("=", 50);
    printIntro();
    cout << "Please enter the tempature in \u2109" << endl;
    cin >> tempF;

    //find what freezes
    switch (willItFreeze(tempF))
    {
    case 1:
        str_freeze_msg = "Oxygen, Ethyl Alcohol, Mercury, and Water freeze.";
        break;
    case 2:
        str_freeze_msg = "Ethyl Alcohol, Mercury, and Water freeze.";
        break;
    case 3:
        str_freeze_msg = "Mercury and Water freeze.";
        break;
    case 4:
        str_freeze_msg = "Water freezes.";
        break;
    case 5:
        str_freeze_msg = "None of these freeze.";
        break;
    default:
        cout << "PLEASE NOTIFY SUPPORT AND REPORT ERROR WTF:404 FOR FREEZE!";        
    }

    //find what boils
    switch (willItBoil(tempF))
    {
    case 1:
        str_boil_msg = "Mercury, Water, Ethyl Alcohol, and Oxygen boil.";
        break;
    case 2:
        str_boil_msg = "Water, Ethyl Alcohol, and Oxygen boil.";
        break;
    case 3:
        str_boil_msg = "Ethyl Alcohol and Oxygen boil.";
        break;
    case 4:
        str_boil_msg = "Oxygen boils.";
        break;
    case 5:
        str_boil_msg = "None of these boil.";
        break;
    default:
        cout << "PLEASE NOTIFY SUPPORT AND REPORT ERROR WTF:404 FOR BOIL!";
    }
    
    printBanner("=", 50);
    cout << "At:" << tempF << "\u2109 \n";
    cout << str_freeze_msg << endl;
    cout << "and\n" ;
    cout << str_boil_msg << endl;

    return 0;
} 

//print custom banner
void printBanner (string in_symbl, int in_lngth) //print custom banner
{
    for (int i = 0; i <= in_lngth; i++)
    {
        cout << in_symbl;
    }
    cout << endl;
}

//print introduction
void printIntro()
{
    cout << "This program takes a tempature (in farenheit) and" << endl;
    cout << "shows whether the following substances will" << endl;
    cout << "boil or freeze at that tempature:" << endl;
    printBanner("=", 50);
    cout << "Substance"  << setfill(' ') << setw(22) << "Freezing Point" << setw(20) << "Boiling Point\n";
    cout << "Ethyl Alcohol"  << setfill(' ') <<  setw(12) << "-173\u2109" << setw(21) << "172\u2109" << endl;
    cout << "Mercury" << setw(17) << "-38\u2109" << setw(22) << "676\u2109" << endl;
    cout << "Oxygen" << setw(19) << "-362\u2109" << setw(22) << "-306\u2109" << endl;
    cout << "Water" << setw(19) << "32\u2109" << setw(22) << "212\u2109" << endl;
    printBanner("=", 50);

}

//test for freezing point
int  willItFreeze(double in_tempF)
{
        //Freezing Points
    const double FREEZE_OXYGEN  = -362,
                 FREEZE_ETHYL   = -173,
                 FREEZE_MERCURY = -38,
                 FREEZE_WATER   =  32;

    if (in_tempF <= FREEZE_OXYGEN)
    {
        return 1;
    }
    else if (in_tempF <= FREEZE_ETHYL)
    {
        return 2;
    }
    else if (in_tempF <= FREEZE_MERCURY)
    {
        return 3;
    }
    else if (in_tempF <= FREEZE_WATER)
    {
        return 4;
    } else
    {
        return 5;
    }
}

//test for boiling point
int  willItBoil(double in_tempF)
{
    const double BOIL_OXYGEN  = -306,
                 BOIL_ETHYL   = 172,
                 BOIL_WATER   = 212,
                 BOIL_MERCURY = 676;

    if (in_tempF >= BOIL_MERCURY)
    {
        return 1;
    }
    else if (in_tempF >= BOIL_WATER)
    {
        return 2;
    }
    else if (in_tempF >= BOIL_ETHYL)
    {
        return 3;
    }
    else if (in_tempF >= BOIL_OXYGEN)
    {
        return 4;
    } else
    {
        return 5;
    }
}