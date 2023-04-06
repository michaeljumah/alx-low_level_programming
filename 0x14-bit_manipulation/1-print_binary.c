#include "main.h"
/**
 *print_binary - function that prints the binary representation of a number.
 *@n: unsigned long int
 *Return :nothing.
 *
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
