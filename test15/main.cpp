#include <iostream>
int main(void)
{
    while (true)
    {
        short x{0}, y{0};
        std::cerr << "Welcome to territory control. Please type in your x and y positions\n";
        std::cerr << "Please Type Your x position : ";
        std::cin >> x;
        std::cerr << "Please Type Your y position : ";
        std::cin >> y;
        ((x > -10 && x < 10) && (y > -5 && y < 5)) ? std::cout << "You are completely surounded. Don't move!" << std::endl : std::cout << "You're out of reach!" << std::endl;
    };

    return 0;
}