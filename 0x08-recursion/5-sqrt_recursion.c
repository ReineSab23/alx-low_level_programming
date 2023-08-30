#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: input 
 * Return: value
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find the square root
 * @n: input to find the square root
 * @val: square root
 * Return: int
*/
int square(int n, int val)
{
int (val * val == n)
	return (val);
else if (va; * val < n)
	return (square(n, val +1));
else
	return (-1);
}
