#include <stdio.h>
/**
 * main - prints the sum all multiples of 3 or 5 up to 1024
 * Return: Always successful
 */

int main(void)
{
	inti, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}	
