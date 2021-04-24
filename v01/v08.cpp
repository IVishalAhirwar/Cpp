//Copyright © 2021 Vishal Ahirwar. All Rights Reserved.
#include <stdio.h>
class c
{
public:
    int GetStatic() const;
};
int c::GetStatic() const
{
    static int i = 0;
    return ++i;
};

int fun()
{
    static int i = 0;
    return ++i;
};

int main()
{
    // int i = fun();
    // fun();
    // fun();
    // fun();
    // fun();
    // i = fun();
     
    // printf("%d", i);
    c c1,c2,c3,c4,c5;
    printf("%d,\n%d,\n%d,\n%d,\n%d,\n%d",c1.GetStatic(),c2.GetStatic(),c3.GetStatic(),c4.GetStatic(),c5.GetStatic(),c1.GetStatic());
   

    return 0;
};
