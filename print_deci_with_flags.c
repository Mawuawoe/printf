#include "main.h"
/**
 * print_deci_with_flags - prints a character.
 * @val: arguments.
 * @flags: arg 2
 * Return: integer.
 */

int print_deci_with_flags(va_list args, int flags)
{
int n = va_arg(args, int);
int count = 0;
char sign = 0;

if (n >= 0 && (flags & F_PLUS))
{
sign = '+';
}
else if (n >= 0 && (flags & F_SPACE))
{
sign = ' ';
}
else if (n < 0)
{
sign = '-';
n = -n;
}

/* Print the sign if necessary */
if (sign)
count += _putchar(sign);

/* Now print the actual number */
count += print_int(args);  /* Call to your original print_int function */

return (count);
}
