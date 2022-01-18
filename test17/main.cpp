#include <iostream>
int main(void)
{
    // loops
    for (size_t i{0}, j{1}, k{2}; i < 200; i = j * k, ++j, ++k)
        std::cerr << i << " ";
    std::cerr << "\n------------------------------------------------\n";
    for (char i{65}; i <= 90; i++)
        (i != 'Z') ? std::cerr << i << " " : std::cerr << i;

    // comma operator
    int i{};
    size_t result = (i = {45}, i += 25, i += 25, i++, ++i);
    std::cerr << "\n-----------------\n"
              << result << "\n";

    // range based for loop
    for (auto &i : {"Vishal", "Rahul", "Rakesh", "Coppy", "Fenmy", "Psh"})
    {

        std::cerr << i << " ";
    };

    std::cerr << "\n-------------------------------------\n";

    std::cerr << "\n";
    return 0;
}