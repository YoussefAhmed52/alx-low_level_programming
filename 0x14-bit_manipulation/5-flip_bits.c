#include "main.h"
/**
 * flip_bits - number of bits you would need
 * to flip to get from one number to another
 * @m: second number
 * @n: first number
 * Return: number of bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (1ul & xor)
		counter++;
		xor >>= 1;
	}
	return (counter);
}

