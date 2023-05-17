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
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((count % 5) == 0)
		{
			if (count != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", count);
		}

	}
	putchar('\n');
	return (0);
}

// Enter function here:

