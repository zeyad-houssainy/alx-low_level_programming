#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

// Enter Code from Terminal here:
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}


// Enter function here:

void _puts(char *str)
{
	int count;

	for(count = 0; *(str + count) != '\0'; count++)
	{
		_putchar(*(str + count));
	}
	_putchar('\n');
}
