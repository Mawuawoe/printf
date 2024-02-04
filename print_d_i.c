#include "main.h"

/**
 * get_int - prints to stdout %d and %i
 * @num: is the number passed in
 * Return : the number of figures printed
*/

int get_int(int num)
{
    int n; int r_val = 0;
    int a = num;
    while(a != 0)
    {
        r_val++;
        a = a/10;
    }
    
    if(num == 0)
    {
        _putchar(num +'0');
        return(0); 
    }
    n = num / 10;
    get_int(n);
    _putchar(num%10 + '0');
        
   
    return(r_val);
}