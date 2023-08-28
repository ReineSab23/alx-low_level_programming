#include "main.h"

/**
 * *_memset - writes a fucnction that fills memory with a constant byte
 *
 * @s: pointer input character
 * @b: constant byte input character
 * @n: size of byte input character
 *
 * Return: returns the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
