#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet single digits of base 10
 *
 * Return: 0 (success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar("%i", i);
i++;
}
putchar("\n");
return (0);
}
