#include <iostream>
template <typename T>
void print(T t)
{
    std::cerr << t << "\n";
};
int main(void)
{
    int a{90}, &b{a};
    print(a);
    print(b);
    b = 120;
    print("--------------");
    print(a);
    print(b);

    return 0;
}