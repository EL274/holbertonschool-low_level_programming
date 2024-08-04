#include"main.h"
#include<stdio.h>
/**
 *print binary - prints the binary representation of a number.
 *@n: the number of the pointer to be binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
