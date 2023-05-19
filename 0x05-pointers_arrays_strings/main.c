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

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

// Enter function here:
void print_rev(char *s)
{
	int count = 0;
	int a = 1;
/*
	for (count = 0; *(s + count) != '\0'; count++)
	{


	}
	for (count; count != -1; count--)
	{
		_putchar(*(s + count));
	}*/
	while (a == 1)
	{
		//printf("number of charachters is.. %d\n", count);
		if (*(s + count) == '\0')
		{
			//printf("DONE");
			for (; count != -1; count--)
			{
				if (*(s + count) != '\0')
				{
					_putchar(*(s + count));
				}
			}
			a = 0;
		}
		count++;
	}
}
