#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: Always 0 (success)
*/
void print_numbers(void)
{
int num = 0;
for (num = 0; num <= 9; num++)
{
_putchar(num + 0);
}
putchar("\n");
}
