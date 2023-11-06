#include<stdlib.h>
#include "main.h"
/**
 * create_array - fxn to create array of chars
 *and initializes to specified character
 * @size: size of array
 * @c: character to initialize in array
 *
 * Return: returns NULL if size is 0
 *OR fails and pointer to array if successfull
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
