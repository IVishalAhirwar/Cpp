//Copyright©2021 Vishal Ahirwar.All Rights reserved.
#include <stdio.h>
unsigned long long int fact()
{
    unsigned long  int fac=0;
    int n;
    printf("Enter Number To get Favtor: ");
    scanf("%d",&n);
    fac=n;
    while(n>1)
    {
        fac*=--n;

    };
    return fac;
};

int main()
{
    printf("Fact:%lld",fact());
//     int input;
//     int fact = 0;
//     printf("Enter Number To Get Factorial:");
//     scanf("%d", &input);
    // // for (int i = input; i != 1; i--)
    // // {
    // //     fact=i-1*i*fact;
    // // };
    // // while(!=0)
    // // {
    // //     fact=input*
    // // }
    // for(int i=1;i<input;i++)
    // {
    //     fact+=input*i-1;
    // };

    // printf("\nFactor: %d", fact);
    return 0;
};
