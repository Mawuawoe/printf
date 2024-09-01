#include "main.h"

/**
 * print_ch - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_ch(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
