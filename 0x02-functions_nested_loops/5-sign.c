#include "main.h"
/**
 * print_sign: return 1,0,-1 if the no is +ve,0,-ve
 * @n : the int to pint
 * Return:0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (-1);
	}
		_putchar('-');
		return (0);
}
