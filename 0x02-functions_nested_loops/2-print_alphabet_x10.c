#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char b;
	int c;

	c = 0;
	while (c < 10)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		c++;
	}
}
