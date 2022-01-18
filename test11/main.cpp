#include <iostream>
int main(void)
{
    while (1)
    {
        std::cerr << "Enter, Number ;) ";
        short input{0};
        std::cin >> input;
        (input % 2) ? std::cerr << input << " is odd;\n" : std::cerr << input << " is even;\n";
    };

    return 0;
}