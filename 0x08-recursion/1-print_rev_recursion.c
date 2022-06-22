#include "main.h"

/**
 * _print_rev_recursion- print string in reverse
 * @s: block of memory to fill
 * return: no return
 */
void _print_rev_recursion(char *s)
{
	*s = '\0';
	if (*s > 0)
	{
		_putchar(*(s - 1));
		_print_rev_recursion(s - 1);
	}
	}
