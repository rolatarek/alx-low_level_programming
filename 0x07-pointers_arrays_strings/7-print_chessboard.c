#include "main.h"
/**
 * print_chessboard - A function that prints the chessboard.
 * @a: represents rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
int nnn, mmm;
for (nnn = 0; nnn < 8; nnn++)
{
for (mmm = 0; mmm < 8; mmm++)
{
_putchar(a[nnn][mmm]);
}
_putchar('\n');
}
}
