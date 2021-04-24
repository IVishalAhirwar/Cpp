//Copyright© 2021 Ahirwar Corp.
#include <stdio.h>
int main()
{
    //pointer

    // int x = 0;
    // int *y = &x;
    // printf("\nX: %i", x);
    // printf("\nY:%i", *y);
    // printf("\nEnter Integer: ");
    // scanf("\n%i",&x);
    // printf("\nX: %i", x);
    // printf("\nY:%i", *y);

    //ref
    int y = 0;
    int* x = &y;
    printf("\nX: %i", *x);
    printf("\nY:%i", y);
    *x = 234;
    printf("\nX: %i",* x);
    printf("\nY:%i", y);
    y = 456;
    printf("\nX: %i", *x);
    printf("\nY:%i", y);
    printf("\nEnter Integer: ");
    scanf("\n%i", x);
    printf("\nX: %i", *x);
    printf("\nY:%i", y);
};
