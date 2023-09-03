#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
*/
int main(int argc, char const *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("argv[i] = %s\n", argv[i]);
}
