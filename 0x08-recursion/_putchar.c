#include <stdio.h>

/**
 * _putchar - writes the character c to the stdout
 *
 * @c: character
 *
 * Return: on success 1
 * on error -1
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}
