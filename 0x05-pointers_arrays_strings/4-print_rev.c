#include "main.h"
/**
*print_rev -  prints a string in reverse
*@s: string
*Return : nothing
*/

void print_rev(char *s)
{
	char *ptr;
	int temp = s - 1;

	for (; *s != '\0'; s++)
	ptr = s;
	if (*ptr == '\0')
	{
		ptr --;
	}

	do{
		_putchar(*ptr);
		ptr--;
	}while(ptr != temp);
}
