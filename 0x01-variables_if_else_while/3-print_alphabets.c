#include"stdio.h"
/**
* main - Prints both kinds of alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char bridg[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int size;

	size = sizeof(bridg) / sizeof(bridg[0]) - 1;
	for (i = 0; i < size; i++)
		putchar(bridg[i]);
	putchar('\n');
	return (0);
}
