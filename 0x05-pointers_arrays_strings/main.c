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

    str = "123456789";
    puts_half(str);
    return (0);
}

// Enter function here:
void puts_half(char *str)
{
	int len;

	for (len = 0; *(str + len) != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		len = len / 2;
		for (; *(str + len) != '\0'; len++)
		{
			_putchar(*(str + len));
		}
	}
	else
	{
		len = (len - 1) / 2;
		for (; *(str + len) != '\0'; len++)
		{
			_putchar(*(str + len));
		}
	}
}

