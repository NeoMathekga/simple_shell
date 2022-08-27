#include "main.h"
/**
 * put_string - outputs string
 *@str: string to print
 *
 *return: nothing
 *
 */
void put_string(char *str)
{
	if(str)
	{
		for(unsigned int i =0; str[i] != '\0'; i += 1)
			_putchar(str[i]);
	}
}
