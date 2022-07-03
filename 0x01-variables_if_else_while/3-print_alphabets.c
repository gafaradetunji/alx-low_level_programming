#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*main - prints alphabet
*	@void: empty parameter list for main.
*
*	Description: print the alphabet in lower and upper case
*	can only use putchar
*
*	Return: Always 0 (Success)
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
