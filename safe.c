#include <stdio.h>

int main (void)
{
    char str[50],ch;
    int i=0;
    while((ch = getchar()) != '\n')
    {
        if(i<5)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    printf("%s",str);
    return 0;
}