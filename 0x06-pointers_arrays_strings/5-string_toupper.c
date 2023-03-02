#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @h: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *h)
{
	int i = 0;
	int desp = 'a' - 'A';

	for (i = 0; h[i] != '\0'; ++i)
	{
		if (h[i] >= 'a' && h[i] <= 'z')
		{
			h[i] = h[i] - desp;
		}
	}
	return (h);
}
