#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* FLAGS */
#define F_PLUS 1
#define F_SPACE 2
#define F_HASH 4
#define F_MINUS 8
#define F_ZERO 16

/**
 * struct format - converter for _printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
/*int get_int(int num);*/
int print_ch(va_list val);
int print_string(va_list val);
int _strlenc(const char *s);
int _strlen(char *s);
int print_percentage(void);
int print_int(va_list args);
int print_deci(va_list args);
int print_binary(va_list val);
int print_unsign_int(va_list args);
int print_o(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_spec_HEX(unsigned int num);
int print_spec_string(va_list val);
int print_spec_hex(unsigned long int num);
int print_pointer(va_list val);
int print_srevs(va_list args);
int print_rot_13(va_list args);
/* Other function prototypes */
int print_deci_with_flags(va_list args, int flags);
int print_o_with_flags(va_list val, int flags);
int print_hex_with_flags(va_list val, int flags);
int print_HEX_with_flags(va_list val, int flags);

#endif
