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
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

// Enter function here:
void rev_string(char *s)
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
	_putchar('\n');
}

