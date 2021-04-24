//Copyright© 2021 Vishal Ahirwar.All Rights Reserved.
#include <cstdio>
#include <new>
int main()
{
    long long int mem;
    printf("How Much Memory Do You Want To Allocate ??");
    scanf("%lld", &mem);
    long long int *ip;
    ip = new (std::nothrow) long long int[mem];
    if (!ip)
    {
        printf("Failed To Allocate Memory!");
    };
    for (int i = 0; i < mem; i++)
    {
        ip[i] = static_cast<char>(i);
        printf("\n|%d|", i);
    };
    for (int i = 0; i < mem; i++)
    {
        char x = static_cast<char>(ip[i]);
        printf("| %c |", x);
    };
    printf("\nDeleting Data...");
    delete ip;

    // printf("%lld",mem);
    int x{0};
    scanf("%d",x);
    return 0;
};
