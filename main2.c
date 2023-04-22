#include "main.h"
#include <stdio.h>

int main(void)
{
        int r_value;
        char name[] = "Emmytech";

        r_value = printf("Emmyglobal\n");
        printf("r_value is %d\n", r_value);
      

	//using putcahar
	_putstring(name[3]);
	_putstring("\n");



        return (0);
}

