#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
*@s: parameter string
*
*/


void _print_rev_recursion(char *s)
{
	int count;
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
