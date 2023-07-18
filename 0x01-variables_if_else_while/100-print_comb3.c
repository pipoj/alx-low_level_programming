#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigning random numbers to variables
 *
 * Return: always (0)
 */
int main(void)
{
	int x, y;

	for (x = '0'; x < '9'; x++)
	{
		for (x = y + 1; y <= '9'; y++)
		{
			if (y != x)
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
