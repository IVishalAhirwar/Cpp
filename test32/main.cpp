#include <iostream>
#define NL std::cerr << "\n";
template <typename T>
T pri(T &t)
{
    std::cerr << t;
    return t;
};
template <typename T>
T pri(T t, short i)
{
    std::cerr << t;
    return t;
};

int main(void)
{
    const char *const message{"Hello, There!"};
    // const char **const pmessage{message};
    pri(message);
    NL
        NL
            pri("Successfuly Executed!\n", 0);
    NL

        int a{120},
        b{130};
    int *ptr_int{&a};
    pri(*ptr_int);
    *ptr_int = 125;
    NL
        ptr_int = &b;
    pri(*ptr_int);
    NL

        // pri(*pmessage);
        return 0;
}