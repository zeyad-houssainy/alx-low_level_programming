#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@i: number to be targeted
*Return: returns 0
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
