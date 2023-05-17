#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/

void print_triangle(int size)
{
	int y, hash, space, count;

	space = size - 1;
	hash = size - space;
	count = size - 1;
	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{

			for (space = count - 1; space >= 0; space--)
			{
				_putchar(' ');
			}
			count--;

			for (hash = size - y - 1; hash < size; hash++)
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
