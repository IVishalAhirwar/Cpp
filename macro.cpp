/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>
#define max(x, y) (x > y ? x : y)
#define print(str) #str
namespace basic
{
    template <typename T>
    void Print(T t);
};
namespace advanced
{
    template <typename T>
    void Print(T);

};
template <typename T>
void advanced::Print(T t)
{
    std::cout << "[V_ADVANCED]  : " << t << "\n";
};

template <typename T>
void basic::Print(T t)
{
    std::cout << "[V_BASIC] : " << t << "\n";
};

int main()
{
    basic::Print(max(20, 45));
    basic::Print(print(Hey !\nThere\nThis is Vishal.));
    advanced::Print(max(20, 45));
    advanced::Print(print(Hey !\nThere\nThis is Vishal.));
};
