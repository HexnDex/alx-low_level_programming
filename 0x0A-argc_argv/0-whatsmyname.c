#include<stdio.h>
/**
 * main - Entry to the program
 * @argc: number of command line arg
 * @argv: array of command line arg
 *
 * Return: returns 0 if succesful
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
