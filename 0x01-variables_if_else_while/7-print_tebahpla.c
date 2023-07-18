#include <stdio.h>
/**
 * main - assigning random numbers to variables
 *
 * Return: always (0)
 */
int main(void)
{
	char t;

	for (t = 'z' ; t >= 'a' ; t--)
		putchar(t);
	putchar('\n');

	return (0);
}
