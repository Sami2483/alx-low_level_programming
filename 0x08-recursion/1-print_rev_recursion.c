#include "main.h"

/**
 * _print_rev_recursion- print string in reverse
 * @s: block of memory to fill
 * return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
