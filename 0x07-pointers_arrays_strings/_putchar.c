#include <unistd.h>
/**
 * _putchar - writes the charachter c to stdout
 * @c: The charachter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, err is set appropriately
 */
int _putchar(char c)
{
return (wrtite(1, &c, 1));
}
