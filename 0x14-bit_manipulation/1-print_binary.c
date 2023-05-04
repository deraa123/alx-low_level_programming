#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{

	print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');

}
