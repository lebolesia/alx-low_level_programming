#include "main.h"

/**
 * get_endianness - The line examines endianness
 * Return: 0 on large endian, 1 on small endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
