#include "main.h"
/**
 *void _puts - prints a string
 * @str: string
 *Return: nothing
 */


void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}

