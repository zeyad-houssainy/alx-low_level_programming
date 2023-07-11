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
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "ABCD");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

// Enter function here:
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);

}

