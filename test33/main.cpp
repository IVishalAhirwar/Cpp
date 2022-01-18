#include<iostream>
int main(void)
{
    const char* student[]{
        "Vishal",
        "rohan",
        "rishi"
    };
    //std::cerr<<*(student+21);
    *(student+21) = "Syana!";
    std::cerr<<*(student+21);
    return 0;
}