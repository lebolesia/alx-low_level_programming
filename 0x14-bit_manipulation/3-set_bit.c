#include "main.h"

/**
 * set_bit - The line places amount of bit to 1 at set indicator
 * @n: The numb to set
 * @index: The indicator to position bit
 * Return: 1 on success, or -1 on  error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
