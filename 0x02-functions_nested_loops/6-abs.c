#include "main.h"
/**
 * main - check the code
 *@n: character to be verified
 * Return: absolute value.
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
