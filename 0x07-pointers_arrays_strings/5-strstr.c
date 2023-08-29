#include "main.h"
/**
 * _strstr - A function that locates a substring.
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: if the substring is located - a pointer to the beginning
 * of the located substring
 * if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
