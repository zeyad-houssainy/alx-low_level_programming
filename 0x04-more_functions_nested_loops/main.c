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
    print_square(2);
    print_square(10);
    //print_square(0);
    //return (0);
}

// Enter function here:
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
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
