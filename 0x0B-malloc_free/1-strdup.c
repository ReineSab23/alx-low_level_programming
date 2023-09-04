#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: pointer or NULL
*/
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
int i;
int n;
while (str[n] != '\0')
{
n++;
}
char *new_str = (char *)malloc((n + 1) * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i <= n; i++)
{
new_str[i] = str[i];
}
return [new_str]
