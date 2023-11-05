#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program
 * @argc: number of command line args
 * @argv: array of command line args
 *
 * Return: returns 0 if ssuccessful and 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 1; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
