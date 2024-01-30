#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include<stdio.h>


typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list val);
int print_s(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);

#endif