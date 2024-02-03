#include "main.h"
/**
 * _printf - prints to stdout formatted text
 * @ format: format strings with specifiers
 * Return : no len of strings printed
*/

int _printf(const char * format, ...)
{
    char new_line = '\n';
    int i = 0;
    va_list (mylist);
    va_start (mylist, format);
    while (*format)
    {
        if(*format != '%')
        {
            write(1, format, 1);
            i++;
        }
        else
        {
            format++;
            if(*format == '\0')
            {
                break;
            }
            if(*format == 'c')
            {
                char s = va_arg(mylist, int);
                write(1, &s, 1);
                i++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(mylist, char *);
                int str_len = 0;
                while (str[str_len] != '\0')
                {
                    str_len++;
                }       
                write(1, str, strlen(str));
                
                i = i + str_len;
            }
            else if (*format == '%')
            {
                char a = '%';
                write(1, &a, 1);
                i++;
            }
        }
        format++;
        va_end (mylist);
    }
    write(1, &new_line, 1);
    return(i);
}


