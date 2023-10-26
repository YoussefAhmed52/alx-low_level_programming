#include "main.h"
/**
 * get_endianness - return endianness
 * Return: 0 if big endian, and 1 if small
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
