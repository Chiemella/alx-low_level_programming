#include "main.h"

/**
 * print_alphabet - Print all lowercase alphabets
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
int x = 97;

while (x <= 122)
{
putchar(x);
x++;
}
putchar('\n');
}
