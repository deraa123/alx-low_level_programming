#include"main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to look  bits in
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & (1UL << index)) ? 1 : 0);
}
