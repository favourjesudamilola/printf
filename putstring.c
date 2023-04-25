#include "main.h"

/**
 * _putstring - writes the char c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putstring(char z)
{
        return (write(1, &z, 1));
}
