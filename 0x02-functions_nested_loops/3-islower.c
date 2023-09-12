#include "main.h"

/**
 * _islower - function
 * @c: input character
 * Description: task 4 0x02
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
char a;
int low = 0;
for (a = 'a'; a <= 'z'; a++)
{
if (a == c)
low = 1;
}
return (low);
}
