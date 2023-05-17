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
    print_triangle(2);
    //print_triangle(10);
    //print_triangle(1);
    //print_triangle(0);
    return (0);
}

// Enter function here:
void print_triangle(int size)
{
	int x, y, hash, space;



	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				for (hash = 0; hash > 0; hash++)
				{

					for (space = size; space < size; space--)
					{
						_putchar('.');
					}
					_putchar('#');
				}


				_putchar('\n');

			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
