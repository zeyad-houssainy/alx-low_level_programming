#include "main.h"
/**
* print_last_digit : prints last digit
*@i: number targeted
*Return: returns last digit value
*/

print_last_digit(int i);
{
	int last_digit = i % 10;
	if (last_digit >= 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit);
	return (last_digit);
}
