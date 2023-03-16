#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated with s2
 * @s2: string to be concatenated with s1
 * @n: number of bytes to be concatenated from s2
 *
 * Return: a pointer to a newly allocated space in memory
 *         containing s1 followed by the first n bytes of s2
 *         and null terminated, or NULL on failure
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		n = s2_len;

	new_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0'

		return (new_str);
}