#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: int
 * @c: char
 *
 * Return: NULL if size 0 or int
*/
char *create_array(unsigned int size, char c)
{
int i;

if (size == 0)
{
return ('\0');
}
else
{
char *A = (char *)malloc(size * sizeof(char));
if (A == '\0')
{
return ('\0');
}
for (i = 0; i < size; i++)
{
A[i] = c;
}
return (A);
}
}

