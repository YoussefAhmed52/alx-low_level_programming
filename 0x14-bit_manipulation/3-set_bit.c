#include "main.h"
/**
 * set_bit - sets the bit to 1 at index
 * @index: index given
 * @n: number
 * Return: 1 if success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
