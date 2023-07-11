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
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

//    printf("%s\n", s1);
//    printf("%s", s2);
    ptr = _strcat(s1, s2);
//    printf("%s", s1);
//    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

// Enter function here:
char *_strcat(char *dest, char *src)
{
	int temp = dest;

	for (; *dest != '\0'; dest++)
	{

	}
	if (*dest == '\0')
	{
		for (; *src != '\0'; src++, dest++)
		{
			*dest = *src;
		}
	}
	dest = temp;
	return (dest);
}

