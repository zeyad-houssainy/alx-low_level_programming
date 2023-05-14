#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: start number
* Return: nothing
*
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n + 1; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (n + 1; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
