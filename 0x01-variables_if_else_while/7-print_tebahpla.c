#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*
* main - prints alphabet
 *	@void: empty parameter list for main.
 *
 *	Description: prints the alphabet in reverse order
 *	can only use putchar
 *
 *	Return: Always 0 (Success)
*/
int main(void)
{
    char letter = 'z';
    while(letter >= 'a')
    {
        putchar(letter);
        letter--;
    }
    putchar('\n');
    return(0);
}