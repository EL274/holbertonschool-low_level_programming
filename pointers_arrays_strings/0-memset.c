/**# include "main.h"
*
* _memset -Entry point 
* @s destination pointed
* @ b constant byte b
* @ n bytes 
*return always 0 (success)
*/
 char *_memset(char *s, char b, unsigned int n);
{ 
	usigned int i;
	for (i=0 ; i< n ; i++){
		s[i] = b ;
	}
	return s;
}
