#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
 *
* betty style doc for function main goes there
*/
int main(void)
{
    char letter = 'a';
    while(letter <= 'z')
    {
        if(letter == 'e')
            letter++;
        else if(letter == 'q')
            letter++
        else
            putchar(letter);
            letter++;
    }
    putchar('\n');
    return (0);