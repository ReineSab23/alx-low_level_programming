#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: returns s
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

if(s == '\0' || accept == '\0')
{
return ('\0');
}

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s);
}
}
return ('\0');
}
