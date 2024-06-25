#include "main.h"

/**
 * main - a Function that ...
 * Return: Description of the return value.
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}

