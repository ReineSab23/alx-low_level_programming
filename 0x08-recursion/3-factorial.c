#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: input number
 * Return: returnsn n!
*/
int factorial(int n)
{
int i;
if (n < 1)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
