//Copyright©2021 Vishal Ahirwar.AllRights Reserved.
#include<stdio.h>
//function pointer
void func()
{
    static int lp=0;
    printf("\n%d",lp);
    for(int i=0;i<lp;i++)
    {
        for(int j=i;j>0;j--)
        {
             printf("\nHi!");

        };
        printf("\n|#|");

    };   
    lp++;
};
int main()
{
    void (*pfunc)()= func;
    // (*pfunc)()=&func;
    (*pfunc)();
    (*pfunc)();
    (*pfunc)();
    (*pfunc)();

    return 0;

};

