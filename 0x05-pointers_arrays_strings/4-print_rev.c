#include "main.h"

/** 
 * print_rev - reverses the string 
 * @s - the string thats needs to be reversed
 * Return - nothing
 *
*/

void print_rev(char *s){
int i = 0;
while(s[i]){
	i++;
}
while(i<=0){
	_putchar(s[i])
	i--;
}
_putchar('\n')
}
