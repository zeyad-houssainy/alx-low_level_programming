#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/

void times_table(void)
{
	int x;
	int y;
	int temp;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		for (y = 1; y < 10; y++)
		{
			temp = x * y;
			if (temp < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(temp + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((temp / 10) + '0');
				_putchar((temp % 10) + '0');
			}
		}
		_putchar(10);
	}
}
