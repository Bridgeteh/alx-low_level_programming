#include"stdlib.h"
#include"string.h"
#include"stdio.h"
/**
 * main - Outputs the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 97; b < 123; b++)
	{
		if (b != 101 && b != 113)
			putchar(b);
	}
	putchar('\n');
	return (0);
}
