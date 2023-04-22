#ifndef _MAIN_H
#define _MAIN_H

//standard libraries
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format - structure of a sign and its function
 * @sign: format specifiers
 * @fun: function pointer.
 *
 */
typedef struct format
{
	char *sign;
	int (*fun)(va_list);
} format_t;

int my_printf(const char *format, ...);
int _putstring(char m);


#endif
