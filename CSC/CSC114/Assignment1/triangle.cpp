#include <iostream>
using namespace std;


int main()
{
 //  *      3spaces print 1*   
 // ***     2spaces print 3*
 // *****   1spaces print 5* 
 //******** 0spaces print 7*
 //-1  +2 is the pattern
 //should be solved with loops
 //but out of current scope

    cout << "   " << "*" <<endl;
    cout << "  " << "***" <<endl;
    cout << " " << "*****" <<endl;
    cout << "*******" <<endl;

    /*
    int spaces = 0;
    int rows = 4;

   // Print a total of 4 lines of *
   for (int i = 1; i <= rows; i++){
       // To do
       // Starting at 3 spaces print an *
       // On each interation of the loop
       // Decrease the number of spaces by 1 for each row
       // Increase the number of * by 2
   
       // Outer loop works 4 interations
       cout << "my row number from outer loop" << i << endl;
       // Inner loop fails. 
       // The first interation of outer loop gives 
       // two interations of inner loop
       // interation1
       // var spaces = 1
       // var rows   = 4
        // interation2
       // var spaces = 2
       // var rows   = 4

       // The second interation of outer loop gives 
       // one interations of inner loop
       // interation2
       // var spaces = 1
       // var rows   = 4
        // interation2
       // var spaces = 2
       // var rows   = 4       

       // Decrease the number of spaces by 1 for each row
       for (int spaces = 1; spaces < rows-i ; spaces++)
       {
           cout << "   ";
           cout << "Inner loop spaces: " << spaces << " i: " << i << " rows: " << rows << endl;
           
       }
   }

   // will not output until end of program
   cout << "done nested loop\n";

    // Decrease the number of spaces by 1 for each row
    for (int spaces = 1; spaces < rows-4 ; spaces++){
           cout << "Test Loop spaces form inner loop: " << spaces << "rows: " << rows << endl;
           
    }

    for (int i = 0; i < 10; ++i){
        cout << "space " ;
    }
    cout <<endl;


    */  
    return 0;
}
