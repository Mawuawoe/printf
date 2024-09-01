#include "main.h"

int print_o_with_flags(va_list val, int flags)
{
    unsigned int n = va_arg(val, unsigned int);
    int count = 0;

    /* If the # flag is specified and the number is not zero, prepend '0' */
    if (n != 0 && (flags & F_HASH))
    {
        count += _putchar('0');
    }

    /* Now print the octal number */
    count += print_o(val);  /* Call to your original print_o function */

    return (count);
}
