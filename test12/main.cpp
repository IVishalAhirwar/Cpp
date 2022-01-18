#include <iostream>
void onTrue(void)
{
    std::cerr << "You Are eligible for the treatment\n";
};

void onFalse(void)
{
    std::cerr << "You Are 'not' eligible for the treatment\n";
};

int main(void)
{
    while (true)
    {
        std::cerr << "Please, Enter Your Age ;) ";
        short Age{0};
        std::cin >> Age;
        (Age > 21 && Age < 39)
            ? onTrue()
            : onFalse();
    };
}