#include "main.h"

/**
 * flip_bits - counts numb of bits to replace
 * to go from one numb to another
 * @n: numb one
 * @m: num two
 *
 * Return: numb of bits to replace
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
