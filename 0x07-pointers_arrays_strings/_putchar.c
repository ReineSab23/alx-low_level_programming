#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to be printed
 *
 * Return: return 1 if success
 * -1 if no success
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}
