#include "main.h"

/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 **/

void puts2(char *str)
{
	int count;

	for (count = 0; *(str + count) != '\0';)
	{
		_putchar(*(str + count));
		str += 2;
	}
}
