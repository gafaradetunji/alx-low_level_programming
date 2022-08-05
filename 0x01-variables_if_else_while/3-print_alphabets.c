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
<<<<<<< HEAD
=======

	while (alpha <= 'z')
>>>>>>> 2679e413908ec769c1036edc656eb5efa07dcc6d
	{
		putchar (alpha);
		alpha++;
	}
<<<<<<< HEAD
	alpha = 'Z';
	while (alpha == 'Z')
	{
		putchar(alpha);
=======
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar (alpha);
>>>>>>> 2679e413908ec769c1036edc656eb5efa07dcc6d
	        alpha++;
	}
	putchar ('\n');

	return(0);
}
