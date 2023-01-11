#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	int len = 0;
	int index;
	char *cpy;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
		str[index] = cpy[index];
	cpy[len + 1] = '\0';
	return (*cpy);
}
