#include <main.h>

/**
 * _strcat - concatinates two strings
 *@dest: the sting where src is added to
 *@src: the string to be appended
 *Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	int src_len;
	int dest_len;
	int i;

	src_len = 0;
	dest_len = 0;

	while (src[src_len] != '0')
		src_len++;

	while (dest[dest_len] != '0')
		dest_len++;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return(dest)
}
