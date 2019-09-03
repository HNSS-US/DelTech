### Header files used so far in class:  
#### iostream (iostream.h)  
The manipulators in this library affect the format of stream operations.  
Note that iomanip contains additional manipulators.  

| Manipulators    | Action |
|-----------------|:-------|
| dec   | Tells subsequent operation to use decimal representation          |
| end1  | Inserts new-line character \n and flushes output stream           |
| ends  | Inserts null character \0 in an output stream                     |
| flush | Flushes an output stream                                          |
| hex   | Tells subsequent I/O operations to use hexadecimal representation |
| oct   | Tells subsequent I/O operation to use octal representation        |
| ws    | Extracts whitespace characters on input stream                    |
#### iomanip (iomanip.h)
The manipulation in this library affect the format of steam operations. 
Note that iostream contains additional manipulators.  

| Manipulators    | Action |
|-----------------|:-------|
| setbase(b)       | Sets number base to b = 8, 10, or 16 |
| setfill(f)       | Sets fill character to f                   |
| setprecision(n)  | Sets floating-point precision to integer n |
| setw(n)          | Sets field width to integer n              |
#### string
This library enables you to manipulate C++ strings. Described here is a selection of  
the functions that this library provides. In addition, you can use the following operators with  
C++ strings: **=, +, ==, !=, <, <=, >, >=, <<, >>**  
Note that positions within a string begin at 0.  

| Manipulators    | Action |
|-----------------|:-------|
| erase()                  | Makes the string empty |
| erase(pos, len)          | Removes the substring that begins at position pos and contains len characters |
| find(subString)          | Returns the position of a substring within the string |
| length()                 | Returns the number of characters in the string (same as size) |
| replace(pos, len, str)   | Replaces the substring that begins at position pos and contains len characters with the string str |
| size()                   | Returns the number of characters in ths string (same as length) |
| substr(pos, len)         | Returns the substring that begins at position pos and contains len characters |  

#### Other available [C++ Header Files and Standard Functions](https://udel.edu/~caviness/Class/CISC181-03F/C++HeaderFiles.html)

