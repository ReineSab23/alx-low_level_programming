#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: always 0 (success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + 48);
if (i != 9)
{
putchar (',');
}
i++;
}
putchar('\n');
return (0);
}
