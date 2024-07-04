#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: This is the string literal
 * @accept: This is the second string
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cpt;

	cpt = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				cpt++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
		break;
		}
	}
	return (cpt);
}
