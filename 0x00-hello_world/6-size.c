#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of char: %lu byte(s)\n", (unsigned)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned)sizeof(f));
return (0);
}
