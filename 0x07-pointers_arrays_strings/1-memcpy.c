#include "main.h"
/**
 *  *_memcpy - A function that copies memory area.
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int nnn;
for (nnn = 0; nnn < n; nnn++)
{
dest[nnn] = src[nnn];
}
return (dest);
}
