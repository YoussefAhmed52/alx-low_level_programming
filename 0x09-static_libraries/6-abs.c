#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value if an integer
 * @n: takes in integer type input for functiOn
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
