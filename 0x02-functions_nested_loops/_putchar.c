#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on sucsess 1.
 * on error, -1 is returnedm and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
