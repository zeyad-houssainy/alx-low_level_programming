#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
	//Enter the function here
	print_alphabet_x10();
}

//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

void print_alphabet_x10(void)
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

