#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
*/
int main(void)
{
	int c, y;

	for (c = 48; c <= 56; c++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > c)
			{
				putchar(c);
				putchar(y);
				if (c != 56 || y != 57)
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
