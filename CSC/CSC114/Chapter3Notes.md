### 3.1 The cin Object
        CONCEPT: The cin object can be used to read data typed at the keyboard.
        
#### Entering Multiple Values 
What if the wrong data types are entered?

int whole;
double fractional;
char letter

Enter an integer, a double, and a character: 5.7 4 b (Enter)
lhen the user types v:ilues :it the keyho:ird, those values arc first stored in an area of
memory known as rhe keyboard buffer. So, when the user enters the values 5.7, 4, and b,
they arc srored in the keyboard buffer as shown in Figure 3-2.

Figure 3-2 The keyboard buffer  

0   | 1    | 2   | 3   | 4   |  5  | 6   | 7   
--- | ---  | --- | --- | --- | --- | --- | --- 
5   | .    | 7   |     | 4   |     | b   | [enter]
^
cin begins reading here.

When the user presses the [Enter] key,  
cin reads the value 5 into the variable whole. 
cin does not read the decimal point because whole is an integer variable. 
cin reads .7 and stores that value in the double variable fractional . 
The space is skipped, and 4 is the next
value read. It is stored as a character in the variable 1 etter. Because chis ci n statcmenc
reads only three values, the b is lefr in the keyboard buffer. So, in this situarion the program
would have stored 5 in whole, 0.7 in fractional, and rhe character '4' in letter. Ir is
imporranc that the user enccrs values in rhe correct order.


Table 3- 7 Data Type Ranking
long double
double
float
unsigned long long int
long long int
unsigned long int
1 ong int
unsigned int
int



Rule 1: chars, shorts, and unsigned shorts are automatically promoted ro int.

Rule 2: When an operator works with rwo values of different data types, rhe lower-ranking
value is promoted to the type of the higher-ranking value.
In rhe following expression, assume that years is an int and i nterestRate is a float:

Rule 3: When the fi na l value of a n expression is assigned to a variable, it will be converted
to the data type of that variable.
In the following scaremenr, assume that area is a long int, while length and width are

3.4 page 32
Overflow and Underflow
CONCEPT: When a variable is assigned a value that is too large or too small in
range for that variable's data type, the variable overflows or underflow

Type Casting
~ CONCEPT:
Type casting allows you to perform man ual data type conversion.

Formatti ng Output
~ CONCEPT: The cout o bject provides wa ys to format data as it is being displayed.
This affects the way data appears on the screen.

A new header file, <i omani p>, is included in Program 3 - L3. It must be used
in any program that uses setw.
 
Table 3-12 Stream Manipulators
Stream Manipulat0r Description
setw(n) Establishes a print field of /1 spaces.
fixed Displays floating-point numbers in fixed-point notation.
showpoint Causes a decimal point and trailing zeros to be displayed,
even if there is no fractional part.
setpreci sion (n) Sets the precision of floating-point numbers.
left Causes subsequent o utput to be left-justified.
right Causes subsequent o utput to be right-justified.


Fixed and setprecison for currency

3.8 Working with Characters and string Objects
CONCEPT: Special functions exist for working with characters and s tring objects.

getline(cin,variable)

Figure 3-5
Contents of the keyboard buffer
Keyboard buffer
ci n begins _j
reading here.
Figure 3-6
ci n stops reading at the newline character
Keyboard buffer
ci n stops reading here. _j
but does not read the \ n
character

concatenate

For a die roll 
cout << rand()%6




