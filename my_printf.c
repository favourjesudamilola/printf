#include "main.h"
<<<<<<< HEAD
int _printf(const char *format, ...)
{
=======

/**
 * my_printf - function that replicates what printf does
 * @format: a character string
 *
 * Return:  the number of characters printed
 */
int my_printf(const char *format, ...)
{
	int count = 0;

	fargs[] {
		{"c", _char},
		{"s", _string},
		{"%", _percent};
	va_list ap;

	if (!format)
		return (-1);

	va_start(ap, format);
	count = get_func(format, fargs, ap);
	va_end(ap);
	}
	return (count);
>>>>>>> e6583a732bc1e81639da4e83dacf8a27b0fce680
}
