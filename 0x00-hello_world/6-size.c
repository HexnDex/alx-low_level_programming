#include <stdio.h>
/**
*main - print out sizes of data types in c
*this is my personal code while studying with ALX
*Return: 0
*/
int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

	print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
	print("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));
	return (0);
}
