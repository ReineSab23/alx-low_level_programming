#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 * while using int variable
 *
 * Return: always 0 (success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
/*convert digit to ASCII representation*/
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
