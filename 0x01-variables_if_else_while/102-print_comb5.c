#include <stdio.h>
/**
 * main - Entry point
 * Description:
 * Return: Always 0 (success)
*/
int main(void)
{
	int q = 0, w;

	while (q <= 99)
	{
		w = q;

		while (w <= 99)
		{
			if (q != w)
			{
			putchar((q / 10) + 48);
			putchar((q % 10) + 48);
			putchar(' ');
			putchar((w / 10) + 48);
			putchar((w % 10) + 48);
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
