//Copyright©2021 Vishal Ahirwar.AllRights Reserved.
#include <stdio.h>
#include <string>
// int* func(int*x)
// {
//     *x=(*x)*(*x);
//     return x;
// };
std::string &func()
{
    //str="This is Not a String";
    static std::string str{"{{{{V}}}}}}"};
    return str;
};

int main()
{
    std::string x{"This is a String"};
    // *func(&x)=120;
    x = func() = "Fu**";
    std::string y = func();
    printf("X is: %s", x.c_str());
    printf("\nY is : %s", y.c_str());
    return 0;
};
