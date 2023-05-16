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
    print_numbers();
    return (0);
}

// Enter function here:
void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{

		_putchar(i+'0');
	}
	_putchar(10);
}

