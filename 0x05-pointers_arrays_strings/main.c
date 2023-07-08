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
    char *str;

    str = "xABCDEFGx";
    print_rev(str);
    return (0);
}

// Enter function here:
void print_rev(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
	}
	for (; count != -1; count--)
	{
		if (*(s + count) == '\0')
		{
			continue;
		}
		_putchar(*(s + count));
	}
}

