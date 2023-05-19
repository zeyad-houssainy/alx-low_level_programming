#include <stdio.h>

int main (void)
{
	int a;
	int b;

	printf(" adress for int a is ...%d\n", &a);
	printf(" adress for int b is ...%d\n", &b);
	a = 5;
	b = 458;
	printf(" adress for int a is ...%d\n", &a);
	printf(" adress for int b is ...%d\n", &b);

}
