#include <main.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: one of the strings to compare
 * @s2: the other string to compare
 *
 * Return: difference in length
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
		s2++;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 == *s2);
}
