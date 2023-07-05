#include <stdio.h>

int main()
{
	int *ptr;
	int a = 5;
	printf("Original: %d\n", a);
	ptr = &a;
	*ptr = 10;
	printf("Edit: %d\n", a);
	printf("*ptr adress: %p ...\na adress: %p", ptr, &a);

}

