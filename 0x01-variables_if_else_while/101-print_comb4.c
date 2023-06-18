#include"stdio.h"
/**
 * main - Displays all possible different combinations of three digits
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(c);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
