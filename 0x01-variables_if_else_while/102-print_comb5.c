#include <stdio.h>
/**
 *main  - Entry point
 *
 * Description:write a program that prints all possible
 * different combinations of 2 digits
 *
 *
 * Return: always 0 (success)
*/
int main(void)
{
int i1 = 0, i2;
while (i1 <= 99)
{
if (i1 != i2)
{
putchar((i1 / 10) + 48);
putchar((i1 % 10) + 48);
putchar (' ');
putchar((i1 / 10) + 48);
putchar((i1 % 10) + 48);

if (i1 != 98 || i2 != 99)
{
putchar (',');
putchar (' ');
}
}
i2++;
}
i1++;
}
putchar('\n');
return (0);
}
