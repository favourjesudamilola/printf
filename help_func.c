#include "main.h"
/**
 * convert - function that converts our int to hex, octal, or binary
 * @num: the number passed into the function
 * @base: the base to convert to
 *
 * Return: the convertednumber of a certain base
 */
char *convert(unsigned int num, int base)
{
	const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = Representation[num % base];
		num /= base;
	}

	return (ptr);
}

/**
 * _string - function that prints a string
 * @ap: the string
 *
 * Return: 1
 */
int _string(va_list ap)
{
	int i = 0;
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * _int - Prints an integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */
int _int(va_list ap)
{
	int i;
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

/**
 * _unsigned - Prints an unsigned integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int _unsigned(va_list ap)
{
	int i;
	int count = 0;
	int mint = va_arg(ap, int);
	unsigned int n;

	n = mint;
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 != 0)
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

/**
 * _octal - Prints an octal number
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int _octal(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 8);

	for (i = 0; s[i]; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
