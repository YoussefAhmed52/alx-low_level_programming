#include "main.h"
/**
 * clear_bit - clears the bit to 0 at given index
 * @index: given index
 * @n: number
 * Return: 1 if success and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
