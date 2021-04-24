//Copyright© 2021 Ahirwar Corp.
#include<stdio.h>
int main()
{
    char s[]="String";
    for(int i=0;s[i]!=0;i++)
    {
        printf("|%c",s[i]);
    };
    printf("\n");
    for(char*c=s;*c!=0;c++)
    {
        printf("#%c",*c);
    };


    printf("\ns is: %s",s);
    return 0;

};
