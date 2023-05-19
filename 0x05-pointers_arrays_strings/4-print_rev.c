#include "main.h"
/**
*print_rev -  prints a string, in reverse
*
*@s: words to be printed in reverse
*Return: nothing
*/


void print_rev(char *s)
{
	int count = 0;
	int a = 1;

	while (a == 1)
	{
		if (*(s + count) == '\0')
		{
			for (; count != -1; count--)
			{
				if (*(s + count) != '\0')
				{
					_putchar(*(s + count));
				}
			}
			a = 0;
		}
		count++;
	}
	_putchar('\n');
}
