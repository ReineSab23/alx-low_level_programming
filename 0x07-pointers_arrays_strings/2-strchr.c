#include "main.h"

/**
 * *_strchr -  a function that locates a character in a string
 *
 * @s: pointer to the first occurence
 * @c: input character
 *
 * Return: returns s
*/
char *_strchr(char *s, char c)
{
char i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}

