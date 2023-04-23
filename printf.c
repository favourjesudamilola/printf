#include "main.h"

/**
 * _printf - function that prints characters
 * @format - character format
 * Return - number of characters
 */
int printf(const char *format, ...)
{
       	count = 0;
	va_list args;
	va_start(args, format);

	while (*format != '\0') {
		if (*format == '%') {
			format++;

	count = 0;
	char c = 'A';
	int num = 123;
	char str[] = "Hello, world!";
	count += printf("Character: %c\n", c);
	count += printf("Number: %d\n", num);
	count += printf("String: %s\n", str);
	
	printf("Total characters printed: %d\n", count);
	}
	return count;
}
