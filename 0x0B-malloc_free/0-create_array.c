#include "main.h"
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
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
char *A = (char *)malloc(size * sizeof(char));
if (A == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
A[i] = c;
}
return (A);
}
}

