### Data Type Ranking  
When an operator's operands are of different data types, C++ will auto-  
matically convert them to the same data type.  

#### Table type 3- 7 Data Type Ranking
Type | Typical Bit Width | Typical Range
--- | --- | ---
long double | 8 bytes | +/- 1.7e +/- 308 (~15 digits)  
double | 8 bytes |	+/- 1.7e +/- 308 (~15 digits)  
float |	4 bytes | +/- 3.4e +/- 38 (~7 digits)  
unsigned long int | 4 bytes | 0 to 4,294,967,295  
long long int | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  
unsigned long int | 4 bytes | 0 to 4,294,967,295  
long int | 4 bytes | -2,147,483,648 to 2,147,483,647  
unsigned int | 4bytes | 0 to 4,294,967,295  
int | 4 bytes | -2,147,483,648 to +2,147,483,647  

One exception to the ranking in Table 3-7 is when an int and a long are the same size. In  
that case, an unsigned int outranks long because it can hold a higher value.  
When C++ is working with an operator, it strives to **convert the operands to the same type**.  
This automatic conversion is known as **type coercion**. When a value is **converted to a higher  
data type**, it is said to be **promoted**. To **demote a value** means to **convert it to a lower data  
type**.

##### Rule 1: 
chars, shorts, and unsigned shorts are automatically promoted to int.  
You will notice that _char, short, and unsigned short do not appear_ in Table 3-7.  
That's because anytime they are used _in a mathematical expression_, they are automatically  
promoted to an _int_. The only _exception_ to this rule is when an _unsigned short holds  
a value larger than can be held by an int_. This can happen _on systems where shorts are  
the same size as i nts. In this case, the unsigned short is promoted to unsigned int._  

##### Rule 2: 
When an operator works with two values of different data types, the lower-ranking  
value is promoted to the type of the higher-ranking value.  

##### Rule 3: 
When the final value of an expression is assigned to a variable, it will be converted  
to the data type of that variable.  

#### Note: Integer Division  
* When dividing an integer by another integer in C++ the result is an intger and the remainder  
is discarded. To return a floating-point value, at least one of the operands  
must be of a floating-point data type.  
* This returns a remaider 15.0/declaredIntVariable since 15.0 is treated a floating-point number.


##### References:  
C++ Data Types[tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm "tutorialspoint")  
