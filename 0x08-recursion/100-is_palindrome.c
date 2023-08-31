#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @n: pointer the string
 * Return: int
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
n += last_index(s + 1) 
