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
// using namespace std;

int main()
{
    //User Input
    int tempF  = 0;

              // Freezing Points
    const int FREEZE_OXYGEN{-362},
              FREEZE_ETHYL{-173},
              FREEZE_MERCURY{-38},
              FREEZE_WATER{32},
              // Boil Points
              BOIL_OXYGEN{-306},
              BOIL_ETHYL{172},
              BOIL_WATER{212},
              BOIL_MERCURY{676};
        
    //Output for message
    std::string streth = "Ethyl Alcohol",
                strmrc = "Mercury",
                stroxy = "Oxygen",
                strwtr = "Water",
                frzmsg = "",
                bolmsg = "";

    std::cout << std::setfill('=') << std::setw(50)  << '=' << std::endl;
    std::cout << "This program takes a tempature (in farenheit) and" << std::endl;
    std::cout << "shows whether the following substances will" << std::endl;
    std::cout << "boil or freeze at that tempature:" << std::endl;
    std::cout << std::setfill('=') << std::setw(50)  << '=' << std::endl;
    std::cout << "Substance"  << std::setfill(' ') << std::setw(22) << "Freezing Point" << std::setw(20) << "Boiling Point\n";
    std::cout << std::setfill('_') << std::setw(50) << '_' << std::endl;
    std::cout << streth << std::setfill(' ') << std::setw(9) << FREEZE_ETHYL << std::setw(19) << BOIL_ETHYL << std::endl;
    std::cout << strmrc << std::setw(14) << FREEZE_MERCURY << std::setw(20) << BOIL_MERCURY << std::endl;
    std::cout << stroxy << std::setw(16) << FREEZE_OXYGEN << std::setw(20) << BOIL_OXYGEN << std::endl;
    std::cout << strwtr << std::setw(16) << FREEZE_WATER << std::setw(20) << BOIL_WATER << std::endl;  
    std::cout << std::setfill('=') << std::setw(50)  << '=' << std::endl;
    std::cout << "Please enter tempature as an integer:\n"; 
    std::cin >> tempF;
    std::cout << std::setfill('_') << std::setw(50) << '_' << std::endl;

    // Freezing point
    if (tempF  <= FREEZE_OXYGEN)
    {
        frzmsg = " Oxygen Frezes";
    }
    else if (tempF <= FREEZE_ETHYL)
    {
        frzmsg = " Ethyl Alcohol Freezes";
    }
    else if (tempF <= FREEZE_MERCURY)
    {
        frzmsg = " Mercury Freezes";
    }
    else if (tempF <= FREEZE_WATER)
    {
        frzmsg = " Water Freezes";
    }
    else
    {
        frzmsg = " None Freeze";
    }
    

    //Boiling Point
    if (tempF >= BOIL_MERCURY)
    {
        bolmsg = "Mercury Boils";
    }
    else if (tempF >= BOIL_WATER)
    {
        bolmsg = "Water Boils";
    }
    else if (tempF >= BOIL_ETHYL)
    {
        bolmsg = "Ethyl Alcohol Boils";
    }
    else if (tempF >= BOIL_OXYGEN)
    {
        bolmsg = "Oxygen Boils";
    }
    else
    {
        bolmsg = "None Boil";
    }
    
    std::cout << "At " << tempF << frzmsg << " and " << bolmsg << std::endl;
    std::cout << std::setfill('=') << std::setw(50)  << '=' << std::endl;
    return 0;
}
