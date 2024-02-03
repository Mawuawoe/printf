#include "main.h"

/*this code prints format string, it have placeholders for c & s and prints %*/

int _printf(const char * format, ...)
{
    va_list (mylist);

    va_start (mylist, format);

    int i = 0;

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
    char new_line = '\n';
    write(1, &new_line, 1);
    return(i);
}


