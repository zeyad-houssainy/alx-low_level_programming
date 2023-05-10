#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num_1;
	int num_2;

	for (num_1 = '0'; num_1 <= '9'; ++num_1)
	{
		for (num_2 = '0'; num_2 <= '9'; ++num_2)
		{
			if (num_1  != num_2)
			{
				putchar(num_1);
				putchar(num_2);
				putchar(',');
				putchar(' ');
			}
		}


	}

	putchar('\n');

	return (0);
}
