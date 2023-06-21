#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers till 98
 * @n: numper input
 * Return: n is the natural number
*/

void print_to_98(int n)
{
	for (n == 0; n != 98; n++)
	{
		printf("%d", &n);
		printf(',', &n);
		printf(' ', &n);
		printf('\n', &n);
		return (n);
	}
}
