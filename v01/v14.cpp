//Copyright©2021 Vishal Ahirwar.All Rights Reserved.
//#include<cstdio>
#include <stdio.h>
int main()
{
    int x{0};
    printf("Enter Size of Memory to Allocate ??");
    scanf("%d", &x);
    long long int *memory;
    memory = new long long int[x];
    for (int i = 0; i < x; i++)
    {
        memory[i] = i + 90;
    };

    size_t st = (sizeof memory) * 4 * x;
    printf("Size of Allocated Memory: %zd MB", (st / 8) / 2048);
    delete memory;
    return 0;
};
