#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *		followed by new line
 * Return: Always 0 at succes
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		if (i < 0)
		{
			_putchar(i + 48);
		}

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
