#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the decimal number
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index, or -1 if index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = (n >> index);
	if (index > 32)
		return (-1);
	return (bit_value & 1);
}

