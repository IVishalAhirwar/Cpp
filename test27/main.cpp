#include <iostream>
#include <ctime>
#undef DEBUGGING
#ifndef DEBUGGING
#define READY
#endif

int main()
{
    std::srand(std::time(0));

#ifdef DEBUGGING
    std::cerr << "\nDebugging : ON " << RAND_MAX << "\n";
#endif
#ifdef READY
    std::cerr << "\nCopyright(c) 2022 Viex(Vishal Ahirwar.).All rights reserved.\n...\n";
#endif

    unsigned short pwdLen{0};
    unsigned int pwd{0};
    std::cerr << "Enter the password i'm not watching <0,10000>...\n";
    std::cin >> pwd;
    std::cerr << "Can You Guess what's the length of password then we wil help you to crack the password ??\n";
    std::cin >> pwdLen;
    {
        unsigned short temp{1};
        for (unsigned short len{0}; len < pwdLen; ++len)
        {
            temp *= 10;
        };

        unsigned int cpwd{0};
        while (cpwd != pwd)
        {
            cpwd = (std::rand() % temp);
            std::cerr << "\r" << cpwd;
        };
        std::cerr << "\n-------------------\nyour password is : " << cpwd << "\n";
    };

    return 0;
}