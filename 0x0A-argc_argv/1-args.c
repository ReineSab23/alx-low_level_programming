#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: int
 * @argv: list
 * Return: 0
*/
int main(int argc, char const *argv[])
{
int i;

for(i=1;i<argc;i++)
{
printf("enter the arguments");
scanf("%s\n", argv[i])
}
printf("%d\n", argc - 1);
return (0);
}
