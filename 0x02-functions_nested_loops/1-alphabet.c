#include "main.h"
/**
*main - function prints text as output
*
*Return:return 0
*/

void print_alphabet(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	_putchar (10);
	return (0);
}
