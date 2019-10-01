**Types and objects**  
• A type defines a set of possible values and a set of operations (for an object).  
• An object is some memory that holds a value of a given type.  
• A value is a set of bits in memory interpreted according to a type.  
• A variable is a named object.  
• A declaration is a statement that gives a name to an object.  
• A definition is a declaration that sets aside memory for an object.  

**Type safety**  
Using a variable before it has been initialized is not considered type-safe.  

**Safe conversions**  
A char is converted to an int and an int is converted to a double.  
char-to-int conversion safe because no information is lost  
A value is always converted to an equal value or (for doubles) to the best approximation of an equal  
value — these conversions are safe:  
**bool** to **char**    
**bool** to **int**  
**bool** to **double**  
**char** to **int**  
**char** to **double**  
**int** to **double**  

**Unsafe conversions**  
By unsafe, we mean that a value can be implicitly turned into a value of another type that does
not equal the original value. Such conversions are also called “narrowing” conversions, because they put a value into an object that may be too small
(“narrow”) to hold it.  

You’ll find that many input values produce “unreasonable” results. Basically, we are trying to put a gallon into a pint pot
(about 4 liters into a 500ml glass). All of the conversions
**double** to **int**
**double** to **char**
**double** to **bool**
**int** to **char**
**int** to **bool**
**char** to **bool**

