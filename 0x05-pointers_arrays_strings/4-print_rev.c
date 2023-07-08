#include "main.h"
/**
*print_rev -  prints a string in reverse
*@s: string
*Return : nothing
*/

void print_rev(char *s)
{
	int count;
	for (count = 0; *(s + count) != '\0'; count++)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
	for (; count != -1; count --)
	{
		if (*(s + count) == '\0')
		{
			continue;
		}
		_putchar(*(s + count));
	}
}
