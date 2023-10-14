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
	int sum = 0, j = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (j--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
