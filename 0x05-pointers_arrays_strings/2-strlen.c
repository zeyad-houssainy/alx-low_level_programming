#include "main.h"
/**
*_strlen - returns the length of a string.
*
*@s: number 1
*Return:lnegth
*/

int _strlen(char *s)
{
	long int temp, count;

	for (temp = 0; s[temp] != '\0'; temp++)
	{
		count++;
	}
	return (count);
}
