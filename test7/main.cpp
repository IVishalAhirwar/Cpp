#include <iostream>
#include <bitset>
#include <limits>
// 343 literal
//  auto PI ={}; not ok
//  PI =34.f5;not ok
//  const int x={0}; ok
// #include <iomanip>
/*
enum OperatingSystem
{
    WINDOW,
    LINUX,
    IOS,
    ANDROID,
    MAC
};
*/
int main()
{
    unsigned short a = {5};  // 0000000000000101
    unsigned short b = {10}; // 0000000000001010

    std::cerr << "bin{a} : " << std::bitset<16>(a) << "\n";
    std::cerr << "bin{b} : " << std::bitset<16>(b) << "\n";

    std::cerr << "&----------\n";
    auto c = static_cast<unsigned short>(a & b); // 0

    std::cerr << "bin{c} : " << std::bitset<16>(c) << "\n";
    std::cerr << "c = : " << c << "\n";

    std::cerr << "|----------\n";
    c = static_cast<unsigned short>(a | b); // 15
    std::cerr << "c in hex : " << std::hex << c << "\n";
    std::cerr << std::dec;
    std::cerr << "bin{c} : " << std::bitset<16>(c) << "\n";
    std::cerr << "c = : " << c << "\n";
    std::cerr << "c in hex : " << std::hex << c << "\n";
    std::cerr << std::dec;
    std::cerr << "^----------\n";
    c = static_cast<unsigned short>(a ^ b); // 15

    std::cerr << "bin{c} : " << std::bitset<16>(c) << "\n";
    std::cerr << "c = : " << c << "\n";
    std::cerr << "c in hex : " << std::hex << c << "\n";
    std::cerr << std::dec;

    /**
    unsigned short value = {5};
    std::cerr << "bin(value) : " << std::bitset<16>(value) << "\n"
              << "dec(value) : " << value << "\n";
    std::cerr << "left shifted by 5----\n";
    value = static_cast<unsigned short>(value << 5);
    std::cerr << "bin(value) : " << std::bitset<16>(value) << "\n"
              << "dec(value) : " << value << "\n";

    std::cerr<<"-------------------------------------------------\n";
       std::cerr << "bin(value) : " << std::bitset<16>(value) << "\n"
              << "dec(value) : " << value << "\n";
    std::cerr << "right shifted by 5----\n";
    value = static_cast<unsigned short>(value >> 5);
    std::cerr << "bin(value) : " << std::bitset<16>(value) << "\n"
              << "dec(value) : " << value << "\n";
    for(short i=0;i<120; i++)
    std::cerr<<"bin("<<i<<") : "<<std::bitset<16>(i)<<"\n";

    //Overflow & underflow


    double d = {0.045};
    float f = {static_cast<float>(d)};

    int a{static_cast<int>(f)};

    int b  = {int(f)};
    printf("float f:=%f, double d=%lf, int a=%d", f, d, a);
        constexpr int OS = OperatingSystem::LINUX;

        if (static_assert(OS == OperatingSystem::ANDROID))
            std::cerr << "Running on Android ...\n";
        else if (static_assert(OS == OperatingSystem::IOS))
            std::cerr << "Running on IOS ...\n";
        else if (static_assert(OS == OperatingSystem::LINUX))
            std::cerr << "Yeah ! Running on  Linux ...\n";
    **/

    return 0;
}