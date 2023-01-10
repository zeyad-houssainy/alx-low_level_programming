#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int x;
    
    if (size == 0)
    {
        return(NULL);
    }
    array = malloc(sizeof(char)*size);
    if (array == NULL)
    {
        return(NULL);
    }
    for (x=0 ; x<size ; x++)
    {
        c = array[x];
    }
    return(array);
}
