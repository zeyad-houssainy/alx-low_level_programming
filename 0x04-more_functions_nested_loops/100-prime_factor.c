#include <stdio.h>
#include "main.h"
/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
	int count;
	int num = 20;

	for (count = 1; count <= 20; count++)
	{
		printf("%d\n", count);
		if (num % count == 0)
		{
			printf("%d\n", count);
			//num = num / count;
		}
		count = 0;



	}

}
