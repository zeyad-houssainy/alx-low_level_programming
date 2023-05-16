#include "main.h"
/**
*more_numbers - prints the numbers 10 times, from 0 to 14
*
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int a, b;
	a = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
