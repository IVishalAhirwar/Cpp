#include <iostream>
#include <ctype.h>

template <typename T>
void print(const T &ref)
{
    std::cerr << ref << "\n";
};
int main(void)
{
    std::string name{};
    print("now you can enter the text/string : ");
    getline(std::cin, name);

    print("you entered : " + name);

    for (char &ref : name)
    {
        if (std::isblank(ref))
        {
            ref = '$';
        }
        else
        {
            ref = std::toupper(ref);
        };
    };

    print("your updated txt/string : " + name);
    print(" ");
    print(";program terminated;\n");
    return 0;
}