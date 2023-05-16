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
    print_most_numbers();
    return (0);
}

// Enter function here:
void print_most_numbers(void)
{
	char i;
	int temp;

	for (i = 0; i < 10; i++)
	{
		temp = i + '0';
		if ((i != '2') || (i != '4'))
			_putchar(temp);
	}
	_putchar(10);
}

