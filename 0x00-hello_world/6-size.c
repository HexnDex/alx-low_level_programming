#include <stdio.h>
/**
*main - prints the size of various types
*Return: 0
*/
int main(void)
{
	printf("Size of a char: %li byte(s)\n", (long int)sizeof(char));
	printf("Size of an int: %li byte(s)\n", (long int)sizeof(int));
	printf("Size of a long int: %li byte(s)\n", (long int)sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", (long int)sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", (long int)sizeof(float));
	return (0);
}
