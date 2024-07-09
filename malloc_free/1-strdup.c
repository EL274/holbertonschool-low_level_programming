#include "main.h"
#include < stdlib.h>
#include <stddio.h>

char *_strdup(char *str)
{
	unsigned char *_strdup(char *str)
		int i ; size = 0
		if (str == NULL)
		{
			return (NULL);
		}
	for(i = 0; str[i]; i++)
		size ++;
	strdup = malloc ((size + 1) * (sizeof char));
	if (strdup == NULL)
	{
		return (NULL);
	}

	for(i = 0; size[i]; i++)
	strdup[size] = str[i]; 

	strdup[size] ='\0';

	return strdup;
}
