#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void print_alphabet(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
}



int _putchar(char c)
{
	return (write(1, &c, 1));
}
