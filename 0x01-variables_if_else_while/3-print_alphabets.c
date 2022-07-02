#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*betty style doc for function main goes there
*/
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';
	while (alpha == 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA == 'Z')
	{
		putchar(ALPHA);
	        ALPHA++;
	}
	putchar('\n');

	return(0);
}
