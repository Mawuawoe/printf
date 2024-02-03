#include "main.h"

int main (void)
{
    char *format = "myloveisAA%";
    char *n = "\n";
    int i = 0;
    while(format[i] != '%')
    {
        write(1, format, 1);
        format++;
    }
    i++;
    
    write(1, n, 1);
    

return(0);
}