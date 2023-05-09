#include <stdio.h>
/**
 * main - Print all the numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
