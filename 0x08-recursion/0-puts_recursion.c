#include "main.h"
/**
 * _puts_recursion- prints a string
 * @s: first string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puchar(*s);
		_put_recursion((s + 1));
	}
	else
		_putchar("\n");
}
