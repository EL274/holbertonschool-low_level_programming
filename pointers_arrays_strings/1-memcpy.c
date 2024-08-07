#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src to memory area
 * dest
 *
 * @dest: This is the output string
 * @src: This is my input string
 * @n: This is the number bytes to copy
 *
 * Return: This is the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpt;
	char *pDst = dest;
	char const *pSrc =  src;

	for (cpt = 0; cpt < n; cpt++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
