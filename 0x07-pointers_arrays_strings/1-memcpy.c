include "main.h"

/** 
 * _mempy - returns the copied memory space
 * @dest: copied memory 
 * @src: constant
 * @n: max bytes to use
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for(i = 0: n > 0; i++,n--)
{
	dest[i] = src[i];


}
return (dest);
}

