#ifndef _MAIN_H
#define _MAIN_H

//standard libraries
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
 * struct print - print
 * @parameter: The operator
 * @f: The function associated
 */
typdef struct printType
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int my_printf(const char *format, ...);
int _putstring(char m);
int _string(va_list ap);
int _char(va_list ap);
int _percent(va_list ap _attribute_((unused)));
char *convert(unsigned int num, int base);
int _rot13(va_list ap);
int _reverse(va_list ap);
int _int(va_list ap);
int _unsigned(va_list ap);
int _octal(va_list);
int _hex_u(va_list ap);
int _binary(va_list ap);
int _hex_1(va_list ap);
int get_flags(const char *format, print_type argument[], va_list ap);
int _address(va_list ap);



#endif
