
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int count;
	int n = 120;
	if (n < 98)
	{
		for (n + 1 ; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n + 1; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d", n);
}


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

