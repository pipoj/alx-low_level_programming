#include <stdio.h>
/**
 * main - assigning random numbers to variables
 *
 * Return: always (0)
 */
int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
		putchar(y + '0');
	putchar('\n');

	return (0);
}
