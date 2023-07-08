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

    str = "0123456789";
    puts2(str);
    return (0);
}

// Enter function here:
void puts2(char *str)
{
	for (int count = 0; *(str + count) != '\0';)
	{
		_putchar(*(str + count));
		str += 2;
	}
}

