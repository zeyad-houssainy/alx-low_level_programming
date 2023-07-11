#include "main.h"
/**
*_strcat - concatenates two strings
* @dest: buffer string
* @src: String to be copied
*Return : the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int temp = dest;

	for (; *dest != '\0'; dest++)
	{

	}
	if (*dest == '\0')
	{
		for (; *src != '\0'; src++, dest++)
		{
			*dest = *src;
		}
	}
	dest = temp;
	return (dest);
}
