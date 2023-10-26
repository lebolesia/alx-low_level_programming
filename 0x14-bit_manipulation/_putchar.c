#include <unistd.h>

/**
 * _putchar - It writes chara c to stdout
 * @c: The chara to print
 * Return: On success 1
 * On error, -1 is returned, & errno is placed suitably
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
