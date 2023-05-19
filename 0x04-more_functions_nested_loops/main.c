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
	long number = 612852475143;
	int inc;
	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
			number /= inc;

		}
	}
	printf("%ld\n", number);
	return (0);
}



// Enter function here:

