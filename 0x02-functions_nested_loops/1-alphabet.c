#include "main.h"

/*
* Main - Prints out all the alphabets in lowercase
* 
* Return -Always 0;
*/

int main(void)
{
    char letter = 'a';
    while(letter <= 'z')
        {
            _putchar(letter);
            letter++;
        } 
        _putchar('\n');

   return 0;

}
