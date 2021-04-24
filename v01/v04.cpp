//Copyright © 2021 Ahirwar Corp;
#include <stdio.h>
typedef struct student
{
    char *n;
    int cl;
    int age;
    int rolln;

} st;

int main()
{
    st s01[5];
    for (st s : s01)
    {
        printf("\t\t\t|Enter Your BioData|\n");
        printf("\nName:");
        scanf("%s", &s.n);
        printf("\nClass:");
        scanf("%d", &s.cl);
        printf("Age:");
        scanf("%d", &s.age);
        printf("\nRoll Number: ");
        scanf("%d", &s.rolln);
        printf("\n\t\t\t|| Data Submitted SuccessFuly ||");
    };
    printf("\n\t\t\t||Showing Your Data||\n");
    for (st i : s01)
    {
        printf("\nName:%s\nClass:%d\nAge:%d\nRoll Number: %d", i.n, i.cl, i.age, i.rolln);
    };
    int x;
    scanf("%d", &x);

    return 0;
};
