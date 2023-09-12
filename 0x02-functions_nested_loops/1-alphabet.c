#include "main.h"
/**
 * print_alphabet - function to print alphabets in lowercase
 * Description: task 2 0x02
 */

void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
