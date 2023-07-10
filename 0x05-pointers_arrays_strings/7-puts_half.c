#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: string to be printed
 * Return: void
 **/

void puts_half(char *str)
{
	int len;

	for (len = 0; *(str + len) != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		len = len / 2;
		for (; *(str + len) != '\0'; len++)
		{
			_putchar(*(str + len));
		}
	}
	else
	{
		len = (len - 1) / 2;
		for (; *(str + len) != '\0'; len++)
		{
			_putchar(*(str + len));
		}
	}
	_putchar('\n');
}
