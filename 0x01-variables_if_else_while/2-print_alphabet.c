#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description : print alphabet using putchar
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
