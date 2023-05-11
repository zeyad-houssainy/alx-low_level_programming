#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
	print_alphabet();
}

//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below


void print_alphabet(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}

	return (0);
}



