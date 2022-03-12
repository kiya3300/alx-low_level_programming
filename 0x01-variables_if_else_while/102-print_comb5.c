#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
int l;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
for (k = 0; k < 100; k++)
{
for (l = 0; l < 100; l++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i < 10  j < 10  k < 10 || l < 10)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
