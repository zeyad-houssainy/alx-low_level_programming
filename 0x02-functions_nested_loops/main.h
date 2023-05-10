#include <unistd.h>
/**
*File:main.h
*Author:Pericles Adjovi
*Desc:header file containing functions declaration
*/


_putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
