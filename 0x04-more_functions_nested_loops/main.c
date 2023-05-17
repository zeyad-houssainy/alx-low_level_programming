#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

// Enter Code from Terminal here:
int main(void)
{
    print_triangle(5);
    //print_triangle(10);
    //print_triangle(2);
    //print_triangle(0);
    return (0);
}

// Enter function here:
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
