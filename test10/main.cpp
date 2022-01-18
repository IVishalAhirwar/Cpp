#include <iostream>
bool IsLeapYear(unsigned int &);
int main()
{
    constexpr bool Should_Execute{true};
    if constexpr (unsigned int counter{0};Should_Execute)
    {
        while (1)
        {
            unsigned int Year{0};
            ++counter;
            std::cerr << "Please Enter Year :)";
            std::cin >> Year;
            static constinit bool result{false};
            (result = IsLeapYear(Year)) ? std::cout << Year << " is Leap Year!\n" : std::cout << Year << " is not Leap Year!\n";
            if (result)
                std::cout <<counter<< "constexpr executed!\n";
            else
                std::cout <<counter<< "constexpr not executed!\n";
        };
    }
    else
        std::cout << "While Loop Aborted by the developer\n";

    return 0;
};

bool IsLeapYear(unsigned int &Year)
{
    if (Year % 400 == 0)
    {
        return true;
    }
    else if (Year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    };
};
