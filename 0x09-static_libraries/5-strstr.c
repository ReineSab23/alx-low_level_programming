#include "main.h"

/**
 * *_strstr -  a function that locates a substring
 *
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 *
 * Return: Return needle
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (haystack == '\0' || needle == '\0')
{
return ('\0');
}

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; neddle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}

if (needle[j] == '\0')
{
return (haystack + i);
}
}
return ('\0');
}
