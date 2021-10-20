/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>
template <typename T, typename R>
class math
{
    T a;
    R b;

public:
    math(T, R);
    T add() const;
};
template <typename T, typename R>
math<T, R>::math(T t, R r)
{
    this->a = t;
    this->b = r;
};
template <typename T, typename R>
T math<T, R>::add() const
{
    return a + b;
};

int main()
{
    math<int, float> num(5, 10.5);
    math<std::string, char> full("10", 'X');
    std::cout << full.add() << "\n";
    std::cout << num.add();
}
