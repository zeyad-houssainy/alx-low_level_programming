
#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int min, hour;
	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');

		}
	}
}


//##############################################
//##############################################
//##############################################
//testing file
// Enter your code below

