#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @z: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *z)
{
	char r[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (z[i] == r[j])
				z[i] = replace[j / 2];
		}
	}
	return (z);
}
