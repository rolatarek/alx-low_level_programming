#include "main.h"
/**
 * *_strchr - A function that locates a character in a string.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
int nnn;
for (nnn = 0; s[nnn] >= '\0' ; nnn++)
{
if (s[nnn] == c)
{
return (s + nnn);
}
}
return ('\0');
}
