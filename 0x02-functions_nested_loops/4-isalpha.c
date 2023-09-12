#include "main.h"
/**
 * _isalpha - function
 * @c: input
 * Description: task 5 0x02
 * Return: bool value.
 */
int _isalpha(int c)
{
char lowercase;
char uppercase;
int boolletter = 0;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
if (c == lowercase || c == uppercase)
boolletter = 1;
}
}
return (boolletter);
}
