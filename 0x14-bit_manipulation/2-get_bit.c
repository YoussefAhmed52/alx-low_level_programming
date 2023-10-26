#include "main.h"
/**
 * get_bit - the value of a bit at given index
 * @index: the given index
 * @n: number
 * Return: -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

