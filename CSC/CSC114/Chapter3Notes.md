### 3.1 The cin Object
        CONCEPT: The cin object can be used to read data typed at the keyboard.
        
#### Entering Multiple Values 
What if the wrong data types are entered?

int whole;
double fractional;
char lette

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
