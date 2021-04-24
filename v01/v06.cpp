//Copyright© 2021 Vishal Ahirwar.All Rights Reserved.

#include<stdio.h>
int main()
{
    char s[]="Vishal";
    int len{0};
    // for(char* c=s;c;c++)
    // {
    //     if(c==0)break;
    //     len++;
    // };

    for(int i=0;s[i]!=0;i++)
    {
        printf("|%c|",s[i]);
        len=i;
    };

    // for(char c:s)
    // {
    //     len++;
    // };
    printf("%s\nLen 0f String is : %d",s,len);
    return 0;

};
