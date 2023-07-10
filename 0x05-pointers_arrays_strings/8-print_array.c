#include "main.h"
#include <stdio.h>
/**
 * print_array - print the second half of the string
 * @str: string to be printed
 * Return: void
 **/

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len != n-1)
		{
			printf("%d, ", *(a+len));
		}
		else
		{
			printf("%d", *(a+len));
		}

	}
	_putchar(10);
}
