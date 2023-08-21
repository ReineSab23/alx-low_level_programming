#include <unistd.h>

/**
 * _putchar - zrites the character c to stdout
 * @c: the character to be print
 *
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}
