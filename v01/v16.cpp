//Copyright©2021 Vishal Ahirwar.AllRights Reserved.
#include<stdio.h>
int main()
{
    int x{0};
    for(int i=0;i<100;i++)
    {
        if(x==25)break;
        if(i==2||i>1 && i%2 != 0)
        {
            printf("\n(%d).| %d |",x,i);
            x++;    
        };
    };
    scanf("%d",x);
    return 0;


};
