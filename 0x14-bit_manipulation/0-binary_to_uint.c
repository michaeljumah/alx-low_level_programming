#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_num = 0;
	int bit_pos = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[bit_pos] != '\0')
	{
		if (b[bit_pos] != '0' && b[bit_pos] != '1')
		{
			return (0);
		}
		uint_num <<= 1;
		if (b[bit_pos] == '1')
		{
			uint_num |= 1;
		}
		bit_pos++;
	}

	return (uint_num);
}
