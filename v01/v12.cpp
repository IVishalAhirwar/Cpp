//Copyright© 2021 Vishal Ahirwar. All Rights Reserved.
#include <stdio.h>
int main()
{
    int x = 5;
    int y = 9;
    printf("|ENTER|");
    scanf("%d %d", &x, &y);
    const char *s = x > y ? "Yes" : "No";
    printf("|%s|", s);
    return 0;
};
