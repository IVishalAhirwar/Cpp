#include <iostream>
#include "test.h"
// Copyright(c) Vishal Ahirwar.
/*
consteval int get_value()
{
    return 3;
};
*/
int main(void)
{
    v::project1();
    v::assignment1();
    short tool = {1};
    std::cerr << "enter tool >>";
    std::cin >> tool;

    switch (tool)
    {
    case 1:
    case 3:
    case 4:
    case 5:
    case 2:
    {
        std::cout << "tool 2";
        break;
    }
    default:
    {

        std::cout << "no tool";
        break;
    }
    };

    return 0;
}