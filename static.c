#include<stdio.h> 
 
int 
myfunc(int val) 
 
{ 
    static int my_static_var = 0; 
 
    my_static_var += val; 
    return my_static_var; 
} 
 
int 
main(void) 
 
{ 
   int myval; 
 
   myval = myfunc(1); 
   printf("first call %d\n", myval); 
 
   myval = myfunc(10); 
 
   printf("second call %d\n", myval); 
 
   return 0;
}
