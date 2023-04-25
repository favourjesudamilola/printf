#include "main.h"

/**
 * _printf - Function that produces output according to format
 * @format: a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned h = 0, len2 = 0;

	va_list args;
	va_start(args, format);
	for (; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
		{
			_putstring(format[h]);
			len2 += 1;
		}
		else if (format[h + 1] == 'c')
			_putstring(va_arg(args, int));
	}
	return (len2);
}
