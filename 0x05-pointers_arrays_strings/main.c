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
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}



// Enter function here:
int _strlen(char *s)
{
	int count;
	for (count = 0; *(s + count) != '\0'; count++)
	{
	}
	return (count);
}
