
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i = -7896 % 10;
	printf("%d", i);
}


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

