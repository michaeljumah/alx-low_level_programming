#include "main.h"

/**
 * string_toupper - write a fuction that changes all lowercase
 * letters of a string to uppercase
 * @l: input string
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *l)
{
	int i;
	int desp = 'a' - 'A';

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			l[i] = l[i] - desp;
		}
		return (l);
	}
}
