#include "../include/std_lib_facilities.h"

// simple program to exercise operators
int main()
{
    int number_of_words = 0;
    string previous = " ";
    // previous word; initialized to “not a word”
    string current;
    // current word
    while (cin>>current) {
        ++number_of_words;
       // read a stream of words
       if (previous == current) { // check if the word is the same as last
            cout << "word number " << number_of_words;
            cout << "\nrepeated word: " << current;
            //cout << "\nrepeated word: " << current << " word number " << number_of_words << '\n';
            previous = current;
        }         
    }     

    return 0;  

        /*    cout << "Please enter a int value: ";
            int n;
            cin >> n;
            cout << "n == " << n
                << "\nn+1 == " << n+1
                << "\nthree times n == " << 3*n
                << "\ntwice n == " << n+n
                << "\nn squared == " << n*n
                << "\nhalf of n == " << n/2
                << "\nsquare root of n == " << sqrt(n)
                << '\n'; // another name for newline (“end of line”) in output
        
                cout << "Please enter your first and second names\n";
                string first;
                string second;
                cin >> first >> second;
                // read two strings
                string name = first + ' ' + second;
                // concatenate strings
                cout << "Hello, " << name << '\n';
        
                cout << "Please enter two names\n";
                //string first;
                //string second;
                cin >> first >> second;
                // read two strings
                if (first == second) cout << "that's the same name twice\n";
                if (first < second)
                cout << first << " is alphabetically before " << second <<'\n';
                if (first > second)
                cout << first << " is alphabetically after " << second <<'\n';        

            double d = 0;
            while (cin>>d) {
                // repeat the statements below
                // as long as we type in numbers
                int i = d; // try to squeeze a double into an int
                char c = i; // try to squeeze an int into a char
                int i2 = c; // get the integer value of the character
                cout << "the original double d==" << d << endl; // the original double
                cout << "converted to int i=="<< i << endl; // converted to int
                cout << "int value of char i2==" << i2 << endl; // int value of char
                cout << "the char char(" << c << ")\n"; // the char
            }
        */
}