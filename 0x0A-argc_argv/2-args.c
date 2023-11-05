#include<stdio.h>
/**
 * main - Entry to the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
