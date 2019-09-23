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

#### One exception to the ranking in Table 3-7 is when an int and a long are the same size. In  
that case, an unsigned int outranks long because it can hold a higher value.  
When C++ is working with an operator, it strives to **convert the operands to the same type**.  
This automatic conversion is known as **type coercion**. When a value is **converted to a higher  
data type**, it is said to be **promoted**. To **demote a value** means to **convert it to a lower data  
type**.

##### Rule 1: 
chars, shorts, and unsigned shorts are automatically promoted ro int.  
You will notice that char, short, and unsigned short do nor appear in Table 3-7.  
That's because anytime they are used in a mathematical expression, they are automatically  
promoted to an int. The only exception to this rule is when an unsigned short holds  
a value larger than can be held by an int. T his can happen on systems w here shorts are  
the same size as i nts. In this case, the unsigned short is promoted to unsigned int.  

##### Rule 2: 
When an operator works with two values of different data types, the lower-ranking  
value is promoted to the type of the higher-ranking value.  

##### Rule 3: 
When the final value of an expression is assigned to a variable, it will be converted  
to the data type of that variable.  

#### Note: Integer Division  


##### References:
[tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm "tutorialspoint")
[tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_data_types.htm "tutorialspoint")
