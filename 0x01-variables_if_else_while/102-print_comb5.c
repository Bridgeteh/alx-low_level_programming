#include<stdio.h>
/**
 * main - Fetches all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, c;

	for (b = 0; b < 100; b++)
	{
		for (c = 0; c < 100; c++)
		{
			if (b < c)
			{
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (b != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
