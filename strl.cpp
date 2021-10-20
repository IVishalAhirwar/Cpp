/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>
#include <string>
int main(int argv, char *argc[])
{
    std::cout <<
        []() -> float
    {
        std::cout << "\nLambda haaaaaaaaaaaaa\n";
        const float PI = 3.14321f;
        return PI;
    }();

    auto function = [](auto &x, auto &y)
        -> auto
    {
        std::cout << "[Message] : This Calling is Done from Lambda Function!\n";
    };
    function("Hello", " World");
    std::string Message = "\nHello - World\n";
    auto func = [&Message](auto &SetAs)
        -> void
    {
        std::cout << "\n[Messsage] :" << Message;
        Message = SetAs;
    };
    func("VIP Inc. India");
    func(Message);

    //std::cout<<"Hello Wordl!"<<'\n';
    return 0;
};