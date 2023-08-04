#include "main.h"

/**
 * get_endianness - checksthe endainness
 * Return: if big endain, 1 i small endain
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
