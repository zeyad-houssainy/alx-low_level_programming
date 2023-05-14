#include <stdio.h>
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

	for (; count < 50; count++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%d\n", sum);
	return (0);
}
