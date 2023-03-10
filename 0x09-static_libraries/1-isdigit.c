#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *@c: value to check
 *
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	int i, d;

	d = 0;
	/*check if c is digit */
	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			d = 1;
			break;
		}
	}
	return (d);
}
