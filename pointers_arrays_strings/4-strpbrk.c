#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * The _strpbrk() function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: This is the input string
 * @accept: This is the string to locate
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int mak, dell;

	for (mak = 0; s[mak]!= '\0'; mak++)
	{
		for (dell = 0; accept[dell] != '\0'; dell++)
		{
			if (accept[dell] == s[mak])
			{
				return (&s[mak]);
			}
		}
	}
	return (NULL);
}
