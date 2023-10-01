#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *		followed by new line
 * Return: Always 0 at succes
*/
void more_numbers(void)
{
	int k, i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar(k + 48);
		}

		_putchar('\n');
	}
}
