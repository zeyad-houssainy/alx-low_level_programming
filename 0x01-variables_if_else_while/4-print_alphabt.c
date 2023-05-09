#include <stdio.h>
/**
 * main - Print all the letters except q and e in lower case
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
