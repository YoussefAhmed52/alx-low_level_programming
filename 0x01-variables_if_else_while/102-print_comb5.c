#include <stdio.h>
/**
 * main - Entry point
 * Description:
 * Return: Always 0 (success)
*/
int main(void)
{
	int q = 0, w = 0;

	while (q <= 99)
	{
		w = q;

		while (w <= 99)
		{
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			putchar(' ');
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');

			if (q != 99 || w != 99)
			{
				putchar(',');
				putchar(' ');
			}

			if (w == 99 && q == 99)
			{
				putchar('\n');
			}
			w++;
		}
		q++;
	}
	return (0);
}
