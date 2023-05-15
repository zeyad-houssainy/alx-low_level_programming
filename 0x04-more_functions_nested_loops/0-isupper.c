#include "main.h"
/**
 * _isupper - check if char is upper
 *@c: letter or character
 *return : 0 if no, 1 if yes
 */

 int _isupper(int c)
 {
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
 }
