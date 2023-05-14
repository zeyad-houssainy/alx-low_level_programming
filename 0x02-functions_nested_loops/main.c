
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int y, x;
	int temp;
	int n = 2;
 	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
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


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

