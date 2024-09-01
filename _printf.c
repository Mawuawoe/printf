#include "main.h"
/**
 * _printf - is a function for pritig.
 * @format: args.
 * Return: the length of the string.
 */

int _printf(const char * const format, ...)
{
    convert p[] = {
        {"%s", print_string}, {"%c", print_ch},
        {"%%", print_percentage},
        {"%i", print_int}, {"%d", print_deci_with_flags}, /* Updated to print_deci_with_flags */
        {"%r", print_srevs},
        {"%R", print_rot_13}, {"%b", print_binary},
        {"%u", print_unsign_int},
        {"%o", print_o_with_flags}, /* Updated to print_o_with_flags */
        {"%x", print_hex_with_flags}, /* Updated to print_hex_with_flags */
        {"%X", print_HEX_with_flags}, /* Updated to print_HEX_with_flags */
        {"%S", print_spec_string}, {"%p", print_pointer}
    };

    va_list args;
    int i = 0, j, length = 0;
    int flags = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

Here:
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            flags = flags_p(format, &i); /* Call to your flags_p function to get active flags */

            j = 13;
            while (j >= 0)
            {
                if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
                {
                    if (p[j].function == print_deci_with_flags ||
                        p[j].function == print_o_with_flags ||
                        p[j].function == print_hex_with_flags ||
                        p[j].function == print_HEX_with_flags)
                    {
                        length += p[j].function(args, flags); /* Pass flags to the function */
                    }
                    else
                    {
                        length += p[j].function(args);
                    }
                    i = i + 2;
                    goto Here;
                }
                j--;
            }
        }
        _putchar(format[i]);
        length++;
        i++;
    }
    va_end(args);
    return (length);
}
