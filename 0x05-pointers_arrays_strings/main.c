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
    char s[10] = "ABCD";

    //printf("%s\n", s);
    rev_string(s);
    //printf("%s\n", s);
    return (0);
}

// Enter function here:
void rev_string(char *s)
{
	char *ptr;
	int count;
	int temp = 0;
	printf("%s", s);
	//to count the number of characters
	for (count = 0; *s != '\0'; *s++, count++)
	{
		printf("letter %d  ... %c\n", count, *s);
	}
	printf("######## Total character numbers is : %d ########\n", count);
	//create a new memory location to get the string flipped
	ptr = s;
	for (; count != -1; ptr++, s--, count--, temp++)
	{
		if (*s == '\0')
		{
			continue;
		}
		else
		{
			ptr[temp] = s[count];
			printf("%c\n", ptr[temp]);
			//printf("letter ptr is..%c , and letter s is..%c\n", *ptr, *s);
		}

		//printf("HI .. letter %c will be %c from memory location .. %p to %p\n", *s, *ptr, s, ptr);
		//printf("Size of new location is .. %lu\n", sizeof(*ptr));

	}
	return (*ptr);

}
