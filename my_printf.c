#include "main.h"

/**
 * _printf - Function that produces output according to format
 * @format:
 *
 * Return:
 */

int _printf(const char *format, ...)
{
	unsigned h = 0, r_value = 0;
	va_list args;
	va_start(args, format);

	for (; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
		{
			_putstring(format[h]);
			r_value += 1;
		}
	}
}
