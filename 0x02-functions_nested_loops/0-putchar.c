#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
        char x[8] = "_putchar";
        int i = 0;

        while (i <= 7)
        {
        _putchar(x[i]);
        i++;
        }
        _putchar('\n');
        return (0);
}
