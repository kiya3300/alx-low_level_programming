#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j = 48;
for (i = 48; i <= 57; i++)
{
for (j = i + 1 ; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i < 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
