#include<stdio.h>
/**
 * main - Entry to the program
 * @argc: number of command line args
 * @argv: array of command line args
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
