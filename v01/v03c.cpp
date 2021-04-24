//Copyright©2021 Ahirwar Corp.
#include<stdio.h>
int main()
{
    char s[]="String";
    for(char c:s)
    {
        //if(c==0)break;
        printf("^%c",c);
    };

    return 0;

};
