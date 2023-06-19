#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possiblle combination of three digits
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit1 = 0, digit2, digit3;

	while (digit1 <= 7)
	{
		digit2 = digit1 + 1;

		while (digit2 <= 8)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 9)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}

				if (digit3 == 9 && digit2 == 8 && digit1 == 7)
				{
					putchar('\n');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	return (0);
}
