#include "main.h"
#include <stdio.h>

int main(void)
{
	int r_value, r_value2;
	char name[]= "NwaforUgochukwu";

	/* Using the C standard printf() function */
	puts("---------\nUsing printf()\n-------");
	r_value = printf("Emmyglobal\n");
	printf("r_value is %d\n", r_value);


puts("\n-------------------------");


	/* Using My own printf function */
	puts("---\nUsing my own Printf()-----");
	r_value2 = _printf("Emmyglobal\n");
	_printf("r_value2 is %d\n", r_value2);

	return (0);

}
