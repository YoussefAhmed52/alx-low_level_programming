#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * Return: Always 0 on success
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
