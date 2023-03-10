#include "main.h"
/**
 * _strncpy - copies a string to another string
 *
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len; /* string length for src */
	int dest_len; /* string length for dest */
	int i;

	src_len = 0;
	dest_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
