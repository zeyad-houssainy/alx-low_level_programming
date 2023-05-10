#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

 int main(void)
{
	char temp[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(temp[i]);
	}
	_putchar(10);
	return(0);
}



int _putchar(char c)
{
	return (write(1, &c, 1));
}

