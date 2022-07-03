#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
 *
* main - Prints alphabet
*	@void: empty parameter list for main.
*
*	Description: prints the alphabet in lower case
*	can only use putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar ('\n');
	return(0);
}
