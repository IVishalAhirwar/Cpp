//Copyright © 2021 Vishal Ahirwar. All Rights Reserved.
#include<stdio.h>
int& func(int& i)
{
    
    return i;

};
int* pfunc(int* ptr)
{
    return ptr;
};


int main()
{
    int x=0;
    printf("X is: %d\n",x);
    pfunc(&x);

    // func(x);
    // printf("X is: %d\n",x);
    // func(x)=120;
    // func(x);
        printf("X is: %d\n",x);

    return 0;

};
