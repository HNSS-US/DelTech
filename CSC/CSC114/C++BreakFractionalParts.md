#### function modf

> /* modf example */  
#include <stdio.h>      /* printf */  
#include <math.h>       /* modf */  

> int main ()  
{  
  double param, fractpart, intpart;  

>  param = 3.14159265;  
  fractpart = modf (param , &intpart);  
  printf ("%f = %f + %f \n", param, intpart, fractpart);  
  return 0;  
}  


#### Output:  
#### 3.141593 = 3.000000 + 0.141593  

Reference [cplusplus](http://www.cplusplus.com/reference/cmath/modf/ "function modf")
