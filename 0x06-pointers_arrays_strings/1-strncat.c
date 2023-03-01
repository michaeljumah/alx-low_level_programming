#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_len = 0;
	int dest_len = 0;
	int i;

	while (src[src_len] != '\0')
		src_len++;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
