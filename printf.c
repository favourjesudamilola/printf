#include "main.h"
#include <stdio.h>

/**
 * _printf - function that prints characters
 * @format - character format
 * Return - number of characters
 */
int my_printf(const char *format, ...)
{
       	count = 0;
	char c = 'A';
	int num = 123;
	va_list args;

	va_start(args, format);
	while (*format != '\0') {
		if (*format == '%')
		format++;
		switch (*format) {
			case 'c':
				putchar(va_arg(args, int));
                                count++;
                                break;
                        case 's':
                                count += puts(va_arg(args, char *));
                                break;
                        case 'd':
                                count += printf("%d", va_arg(args, int));
                                break;
                        default:
                                putchar('%');
                                putchar(*format);
                                count += 2;
                                break;
               }
	} else {
		putchar(*format);
		count++;
	}

	printf("Total characters printed: %d\n", count);
	va_end(args);
	return count;
}
