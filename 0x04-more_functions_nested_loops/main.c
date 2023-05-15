
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int c = 'a';
	for (; c < 'z'; c++)
	{
		printf("%c\n", c);
	}


}


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

