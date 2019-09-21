#include <iostream>

using namespace std;

    int main(int argc, char const *argv[])
    {
        int serise;
    
        double  gregory_estimate_pi = 4.0,
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
        return 0;
    }    
