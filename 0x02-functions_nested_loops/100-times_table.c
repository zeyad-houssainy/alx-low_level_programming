#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int y, x;
	int temp;
	int n = 3;
 	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 0; y <= n; y++)
		{
			temp = x * y;
			if (temp < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
				_putchar(temp + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(',');
				_putchar((temp / 10) + '0');
				_putchar((temp % 10) + '0');
			}
		}
		_putchar(10);
	}
}
