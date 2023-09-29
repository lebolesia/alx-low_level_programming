#include "main.h"

/**
 * get_bit - returns amount of  bit at index in decimal numb
 * @n: numb to search
 * @index: index of  bit
 *
 * Return: amount of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
