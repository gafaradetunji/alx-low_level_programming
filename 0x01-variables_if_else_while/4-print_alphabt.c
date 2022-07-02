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
    if(letter == 'e' && letter == 'q')
        continue;
    while(letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);