#include "main.h"
/**
 *_calloc - allocate memory with calloc
 *@nmemb:unsigned int
 *@size:unsigned int
 *Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		ar[x] = 0;

	return (ar);

}
