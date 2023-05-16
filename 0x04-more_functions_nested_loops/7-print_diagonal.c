#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*
*@n: number of times the character \ should be printed
*Return: returns nothing
*/

void print_diagonal(int n)
{
	int count, spaces;

	if (n > 0)
	{
		for (count = 0;count < n; count++)
		{
			for (spaces = 0  ;spaces <= count; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}

}
