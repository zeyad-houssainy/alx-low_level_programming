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
	int array[5] = {
		-198, 298, 402, -1024, 98
	};

	print_array(array, 5);
	return (0);
}

// Enter function here:
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len != n-1)
		{
			printf("%d, ", *(a+len));
		}
		else
		{
			printf("%d", *(a+len));
		}

	}
	_putchar(10);
}

