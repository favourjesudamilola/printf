# PRINTF Collaborative Project



### Prototype
`int my_printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.

### File Usage
File Name | Description

The my_printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`_char` | Prints out a single character | `%c`
`_string` | Prints out a string of characters | `%s`
`_percent` | Prints out a % | `%%`
`_int` | Prints out an integer in base 10| `%d` & `%i`
`_reverse` | Prints out the string in reverse | `r`
`_rot13` | Converts the string into Rot13 | `R`
`_binary` | Prints out the binary form of the integer | `b`
`_unsigned` | Prints out an unsigned integer | `u`
`_octal` | Prints out and octal number | `o`
`_hex_l` | Prints out the lower case hexidecimal number | `x`
`_hex_u` | Prints out the upper case hexidecimal number | `X`

### Compilation

This code can be compiled using
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
OR _if you want to test for unknown format specifiers_

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
### The *.c File Test
Create a *.c file with a `void main(void)` function to test the program, in order to see if the custom _printf function works exactly like how regular printf manages to display the number of characters printed.
The *.c file should contain the code displayed below.
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Testing Reversals:[%v]\n", "Emmanuel");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
    return (0);
}
```


### Output Check
Your output should after compiling and running the program should look something like...
``` 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Testing Reversals:[leunammE]
Unknown:[%r]
Unknown:[%r]
```
### About
All files were created and compiled on `Ubuntu 22.04 LTS` using `GCC 11.2.0`



## Collaborative Authors

### 18 [Emmanuel Fasogba](Github: https://github.com/Emmyglobal)(Twitter: nwaforugochukw) & 19 [Ayodele Jesudamilola](github: https://github.com/favourjesudamilola)(Twitter:favourjesudami1)
