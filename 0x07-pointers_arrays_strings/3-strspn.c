#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int nnn, mmm;
for (nnn = 0; s[nnn] != '\0'; nnn++)
{
for (mmm = 0; accept[mmm] != s[nnn]; mmm++)
{
if (accept[mmm] == '\0')
return (nnn);
}
}
return (nnn);
}
