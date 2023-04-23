#ifndef _MAIN_H
#define _MAIN_H


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
typedef struct printType
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int my_printf(const char *format, ...);
int _putstring(char c);
int _print_string(va_list ap);
int _print_char(va_list ap);
int _print_percent(va_list ap __attribute__((unused)));
char *convert(unsigned int num, int base);
int _print_rot13(va_list ap);
int _print_reverse(va_list ap);
int _print_int(va_list ap);
int _print_unsigned(va_list ap);
int _print_octal(va_list);
int _print_hex_u(va_list ap);
int _print_binary(va_list ap);
int _print_hex_1(va_list ap);
int get_flags(const char *format, print_type argument[], va_list ap);
int _print_address(va_list ap);



#endif
