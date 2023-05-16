#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			//_putchar('#');
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
