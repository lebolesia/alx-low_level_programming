#include"main.h"

/**
 * get_bit - The line returns amount of bit at set indicator
 * @n: The numb to examine bits
 * @index: The indicator to examine bit
 * Return: The amount of bit, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
