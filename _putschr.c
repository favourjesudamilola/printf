#include "main.h"

int _putschr(char z)
{
	return (write(1, &z, 1));
}
