#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by src to
 * the end of the string pointed to by dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
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
