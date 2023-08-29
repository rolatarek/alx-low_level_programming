#include "main.h"
/**
 * *_memset - A function that fills memory with a constant byte.
 *@s: pointer to put the constant
 *@b: constant
 *@n: maximum bytes to use
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int nnn;
for (nnn = 0; n > 0; nnn++, n--)
{
s[nnn] = b;
}
return (s);
}
