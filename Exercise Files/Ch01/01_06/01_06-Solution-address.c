#include <stdio.h>

int main()
{
	int a, b;
	int *x, *y;

	printf("Adress of int a is: %p\n", &a);
	printf("Adress of int b is: %p\n", &b);
	x = &a;
	y = &b;
	printf("Adress of pointer x is: %p\n", x);
	printf("Adress of pointer y is: %p\n", y);

}
