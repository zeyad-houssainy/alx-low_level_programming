#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string
 * @dest: buffer string
 * @src: String to be copied
 * Return: the pointer to dest
 **/

 char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
