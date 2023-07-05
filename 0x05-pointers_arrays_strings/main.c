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
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}

// Enter function here:
void swap_int(int *a, int *b)
{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
	int *temp;
	temp = &a;
	a = &b;
	b = temp;

}
