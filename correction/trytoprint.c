#include "main.h"

int main (void)
{
   int r = 123;
   int r_val = 0;

   while (r != 0)
   {
     int n = r % 10;
     _putchar(n +'0');
     r = r/10;
     r_val++; 
   }
    printf("%d", r_val);
    _putchar('\n');
    return(0);
}