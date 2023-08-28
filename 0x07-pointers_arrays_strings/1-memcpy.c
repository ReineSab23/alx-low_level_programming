#include "main.h"

/**
 * *_memcpy - function that copies memory area
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
