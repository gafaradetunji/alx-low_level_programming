#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*betty style doc for function main goes there
*/
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
	        alpha++;
	}
	putchar('\n');

	return(0);
}
