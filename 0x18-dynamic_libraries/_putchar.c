#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: 1 on success
 * -1 on error & erno is set appropriately
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
