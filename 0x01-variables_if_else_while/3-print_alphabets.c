#include <stdio.h>
/**
 * main - lowercase and uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');

	for (x = 'A' ; x <= 'Z' ; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
