#include "header.h"
#include <stdio.h>

int main(void)
{
	int r_value;
	char name[] = "NwaforUgochukwu";

	r_value = printf("Emmyglobal\n");

	printf("r_value is %d\n", r_value);

	write(1, name, 1);
	return (0);
}
