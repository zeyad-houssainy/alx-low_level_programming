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
	int count = 2;
	int num = 20;
	int biggest = 0;


	for (; count <= num; count++)
	{
		//printf("%d....", count);
		if ((num % count == 0) && (num == count))
		{
			printf("final result is %d\n", num);
		}
		else if (num % count == 0)
		{
			printf("%d....prime\n", count);
			num = num / count;
			printf("New number is : %d\n", num);
			count = 2;
		}

		else
		{
			printf("\n");
		}

		if (count > biggest)
		{
			biggest = count;
		}






	}
	//printf("%d", biggest);
}
