#include <stdio.h>
/**
 * main - Prints the alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = '0'; letter >= '16'; --letter)
	{
		printf("%x",letter);
	}

	putchar('\n');

	return (0);
}
