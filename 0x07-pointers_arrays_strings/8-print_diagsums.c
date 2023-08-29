#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: 2d array of int type
 * @size: size of aaray [square]
 */
void print_diagsums(int *a, int size)
{
int nnn, a1 = 0, a2 = 0;
for (nnn = 0; nnn < size; nnn++)
{
a1 += a[nnn];
a2 += a[size - nnn - 1];
a += size;
}
printf("%d, ", a1);
printf("%d\n", a2);
}
