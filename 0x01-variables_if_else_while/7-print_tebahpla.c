#include<stdio.h>
/**
 * main - Reversal printing of lowercase alphabet
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char muaaah;

	for (muaaah = 'z'; muaaah >= 'a'; muaaah--)
		putchar(muaaah);
	putchar('\n');
	return (0);
}
