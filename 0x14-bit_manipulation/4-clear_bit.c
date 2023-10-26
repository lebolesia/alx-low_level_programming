#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - The line places amount of  bit to 0 at set indicator
 * @n: The variable
 * @index: The indicator
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
