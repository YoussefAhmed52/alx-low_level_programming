#include "main.h"
/**
 * strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */


int strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
}
