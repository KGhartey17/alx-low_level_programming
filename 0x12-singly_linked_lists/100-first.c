#include <stdio.h>

/**
 * b4_main - prints a string before (b4, get it?)
 * the main function is executed.
 *
 * Return: void
 */
void __attribute__ ((constructor)) b4_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
