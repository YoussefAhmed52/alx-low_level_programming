#include "variadic_function.h"


/**
 * sum_them_all - sum variable arguments
 * @n: the number of argument
 * @...: the integer to sum
 *
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int c = 0, j = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (j--)
		c += va_arg(ap, int);
	va_end(ap);
	return (c);
}
