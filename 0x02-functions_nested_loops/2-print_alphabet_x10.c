#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/

void print_alphabet(void)
{
	int count;
	char letter;

	for (count = 0; count<10; ++count)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
		{
			_putchar(letter);
		}
		_putchar (10);
	}

}
