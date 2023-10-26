#include "main.h"

/**
 * flip_bits - It adds up numb of bits to replace to
 * move from one numb to the next
 * @n: Numb one
 * @m: Numb two
 * Return: The numb of bits to replace
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
