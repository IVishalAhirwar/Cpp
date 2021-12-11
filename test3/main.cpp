#include <iostream>
#include<iomanip>
int main(void)
{
    std::cin.ignore();
    int var{std::cin.get()};
    std::cerr<<var<<"\n";
    int x{};//use this instead of int x(); <-this
    int x_deci = 15;
    int x_oct = 017;
    int x_hex = 0x0f;
    int x_bin = 0b00000000000000000000000000001111;
    bool CanHandle=0b01111011;//very bad
   
    std::cerr<< std::boolalpha<<"cCan : "<<CanHandle<<"\n";
    {
        std::cerr
            << x_deci
            << "\n"
            << x_oct
            << "\n"
            << x_hex
            << "\n"
            << x_bin
            << "\n";
    }

    return 0;
}