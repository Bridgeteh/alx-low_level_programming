#include"stdio.h"
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;

	for (t = 48; t < 58; t++)
		putchar(t);
	for (t = 97; t < 103; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
