#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - writes a prime number
 * @n: input
 * @othrn: int
 * Return: 1 if success
 * 0 if not
*/
int check_prime(int n, int othrn);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @othrn: int
 * Return: int
*/
int check_prime(int n, int othrn)
{
if (othrn >= n && n > 1)
return (1);
else if (n % othrn == 0 || n <= 1)
return (0);
else
return (check_prime(n, othrn + 1)
}


