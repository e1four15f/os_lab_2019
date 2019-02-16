#include "revert_string.h"

void RevertString(char *str)
{
    int len = 0;
    char* end = str - 1;
    while (str[len] != '\0')
    {
        len++;
        end++;
    }    
    
    char* begin = str;

    for (int c = 0; c < len/2; c++, begin++, end--)
    {        
        char temp = *end;
        *end   = *begin;
        *begin = temp;
    }    
}


