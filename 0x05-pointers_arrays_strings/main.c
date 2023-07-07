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

    str = "ABCD";
    print_rev(str);
    return (0);
}

// Enter function here:
void print_rev(char *s)
{
	char *ptr;
	int temp = s - 1;

	for (; *s != '\0'; s++)
	ptr = s;
	if (*ptr == '\0')
	{
		ptr --;
	}

	do{
		_putchar(*ptr);
		ptr--;
	}while(ptr != temp);
}

