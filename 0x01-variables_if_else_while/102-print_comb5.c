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
			if (q != w)
			{
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			putchar(' ');
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');
			}

			if (q != 98 || w != 99)
			{
				putchar(',');
				putchar(' ');
			}
			w++;
		}
		q++;
	}
	putchar('\n');
	return (0);
}
