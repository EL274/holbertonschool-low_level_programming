#include"function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name :prints a name
 *@name: the name to print
 *@f: pointer function
 *
 *return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
}
