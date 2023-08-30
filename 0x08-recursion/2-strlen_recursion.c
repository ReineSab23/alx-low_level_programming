#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to the string
 * Return: length of *s
*/
int _strlen_recursion(char *s)
{
int i;
if (*s > '\0')
{
i += _strlen_recursion(s + 1) + 1;
return (i);
}
return ('\0');
}
