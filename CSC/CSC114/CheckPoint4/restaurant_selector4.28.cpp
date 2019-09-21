// Resturant selector based on dietary needs
// of guests.
//Joe's Gourmet Burgers:
//   Vegetarian: No
//   Vegan: No
//   Gluten-Free: No
//Main Street Pizza:
//   Vegetarian: Yes
//   Vegan: No
//   Gluten-Free: Yes
//Corner Cafe:
//   Vegetarian: Yes
//   Vegan: Yes
//   Gluten-Free: Yes
//Mama's Fine Italian:
//   Vegetarian: Yes
//   Vegan: No
//   Gluten-Free: No
//The Chef's Kitchen:
//   Vegetarian: Yes
//   Vegan: Yes
//   Gluten-Free: Yes

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool is_vegetarian,
         is_vegan,
         is_glutenfree;

    char vegetarian,
           vegan,
           glutenfree;

    cout << "Is anyone in your party vegetarian? Please enter y/n\n";
    cin >> vegetarian;
    if (toupper(vegetarian) == 'Y')
    {
        is_vegetarian = true;
    }
    else if (toupper(vegetarian) == 'N')
    {
        is_vegetarian = false;
    }
    else
    {
        cout << "Please enter a y or n" << endl;
    }
    

    cout << "Is anyone in your party vegan?\n";
    cin >> is_vegan;
    cin >> vegan;
    if (toupper(vegan) == 'Y')
    {
        is_vegan = true;
    }
    else if (toupper(vegan) == 'N')
    {
        is_vegan = false;
    }
    else
    {
        cout << "Please enter a y or n" << endl;
    }

    cout << "Is anyone in your party gluten free?\n";
    cin >> is_glutenfree;
    cin >> glutenfree;
    if (toupper(glutenfree) == 'Y')
    {
        is_glutenfree = true;
    }
    else if (toupper(glutenfree) == 'N')
    {
        is_glutenfree = false;
    }
    else
    {
        cout << "Please enter a y or n" << endl;
    }


    cout << "Here are your restaurant choices:\n";
    if (is_vegetarian || is_vegan || is_glutenfree)
    {
        cout << "Corner Cafe\n";
        cout << "The Chef's Kitchen\n";
    } else if (is_vegetarian || !(is_vegan) || is_glutenfree)
    {
        cout << "Main Street Pizza\n";
    } else if (is_vegetarian || !(is_vegan) || !(is_glutenfree))
    {
        cout << "Mama's Fine Italian\n";
    }
    
    
    


    return 0;
}
