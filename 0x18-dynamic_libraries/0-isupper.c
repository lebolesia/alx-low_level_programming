#include "main.h"

/**
 * _isupper - funct check
 * @c: chara to check
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);

}
