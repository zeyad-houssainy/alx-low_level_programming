#include <stdio.h>
#include <stdlib.h>
/**
* main -  prints the even Fibonacci numbers
* @void: void
* Return: 0 Success
*/

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int count = 0;


	printf("%d, %d, ", a, b);
	for (; count < 48; count++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum < 4000000 && (sum % 2) == 0)
			printf("%d, ", abs(sum));
		/*if (count != 48)
		{
			printf("%d, ", abs(sum));
		}
		else
		{
			printf("%d\n", abs(sum));
		}*/
	}

	return (0);
}
