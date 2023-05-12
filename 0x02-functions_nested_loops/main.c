
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		printf("%d .. %c\n", letter, letter);
	}
	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		printf("%d .. %c\n", letter, letter);
	}

	putchar('\n');

	return (0);
}


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

