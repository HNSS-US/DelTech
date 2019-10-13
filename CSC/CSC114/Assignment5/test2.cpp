#include <iostream> //cout, cin, endl
#include <iomanip>
using namespace std;

void promptOrder();
int  getNumPizza();
int  getNumDrinks();
int  getTypeDrinks();
void calculateBill();

int main()
{
    promptOrder();
    return 0;
}

void promptOrder()
{
    cout << "Welcome to Pizza World!\n";
    cout << "(You can enter 7777 for number\n";
    cout << "of Pizzas or drinks to exit this program\n";
    cout << "and calculate your total bill\n";
}

int getNumPizza()
{
    int numPizza  = 0;

    cout << "How many pizzas would you like?";
    cin >> numPizza;
    return numPizza
}

int getNumDrinks()
{
    int numDrinks = 0,
        numSodas  = 0,
        numShakes = 0;

    cout << "How many drinks would you like?\n";

}

void calculateBill()
{

}
