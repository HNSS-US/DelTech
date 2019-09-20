### 3.1 The cin Object (page 85)
    CONCEPT: The cin object can be used to read data typed at the keyboard.
    - You must include the <iostream> header file in any program that uses cin.    
    
#### Entering Multiple Values  
    - What if the wrong data types are entered?  
    - Program variables:  
    int whole;  
    double fractional;  
    char letter;  
    
    - Assume user does the following:  
    Enter an integer, a double, and a character: 5.7 4 b (Enter)
    - These values are stored in the area of memory known as **keyboard buffer**
    
       Figure 3-2 The keyboard buffer  (page 89)  
|0|1|2|3|4|5|6|7|
|--|--|--|--|--|--|--|--|
|5 |. |7 |  |4 |  |b |[enter]|  

 ^
 cin begins reading here   
    - '5'  is placed into the variable *whole* since it is declared as **int**.  
    - '.7' is placed into the variable *fractional* since it is declared as **double**.  
    - '4'  is placed into the variable *letter* since it is declared as **char**.  
    
