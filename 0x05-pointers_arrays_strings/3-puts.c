#include "main.h"
/**
 *void _puts - prints a string
 * @str: string
 *Return: nothing
 */


void _puts(char *str)
{
	for (;*str != '\0'; str++)
	{
		_putchar(*str);
	}
}

