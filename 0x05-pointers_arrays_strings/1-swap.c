#include "main.h"
/**
*swap_int - swaps the values of two integers
*to an int as parameter and updates
*the value it points to to 98
*@a: number 1
*@b: number 2
*Return:returns nothing
*/

swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}
