#include <stdio.h>
#include <stdlib.h>
/**
* main -  prints the first 50 Fibonacci numbers
* @void: void
* Return: 0 Success
*/

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int count = 0;



	for (; count < 48; count++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (count != 47)
		{
			printf("%d, ", abs(sum));
		}
		else
		{
			printf("%d\n", abs(sum));
		}
	}

	return (0);
}
