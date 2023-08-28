#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: pointer to the initial segment
 * @accept: pointer tp the substring
 *
 * Return: returns count
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned  int count;
int i, j;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == s[j])
{
found = 1
break;
}
}
if (!found)
{
return (count);
}
count++;
}
return (count);
}

