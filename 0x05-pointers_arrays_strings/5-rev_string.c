#include "main.h"
/**
*print_rev -  prints a string in reverse
*@s: string
*Return : nothing
*/

void rev_string(char *s)
{
//	printf("Start..\n");
	int count, len;

	//string length
	for (len = 0; *(s + len) != '\0'; len++)
	{
	}
//	printf("string length is: %d\n", len);
	// string flip
	char temp[len - 1];
	for (count = 0; len != -1; count++, len--)
	{
		temp[count] = *(s + len);
		puts(temp);

	}
	printf("..%s..\n", temp);

}
