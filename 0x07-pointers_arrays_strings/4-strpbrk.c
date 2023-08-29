#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: The string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept of NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int nnn, mmm;
char *p;
nnn = 0;
while (s[nnn] != '\0')
{
mmm = 0;
while (accept[mmm] != '\0')
{
if (accept[mmm] == s[nnn])
{
p = &s[nnn];
return (p);
}
mmm++;
}
nnn++;
}
return (0);
}
