#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @e: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *e)
{
	int conversion, i, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (i = 0; e[i] != '\0'; i++)
	{
		if (e[i] >= 'i' && e[i] <= 'z')
		{
			e[i] =  e[i] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == e[i])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (e);
}
