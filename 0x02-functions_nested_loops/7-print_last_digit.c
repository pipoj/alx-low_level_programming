#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: Treated number
 * Return: Value of the last number
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
	{
		k = k * -1;
	}
	_putchar(k + '0');
	return (k);
}
