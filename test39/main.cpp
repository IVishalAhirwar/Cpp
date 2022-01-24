#include <iostream>
template <typename T>
void print(T t)
{
    std::cerr << t << "\n";
};
int main(void)
{
    const int a{90}, &b{a};
    int& ref{a};
    //can't do that : ERROR

    const int& refo{a};
    //yeah this will work fine

    
    int *const read_only_address{&b};
    // location is not const only variable is const

    read_only_address = &a;

    const int *read_only_data{&b};
    // location is const variable is not const

    *read_only_data = 100;
    print(*read_only_data);

    int const *read_only_location{&b};
    // location is const variable is not const

    *read_only_location = 500;
    print(*read_only_location);

    const int *const read_only_location_and_variable{&b};
    // location and variable both are const

    print(*read_only_location_and_variable);

    return 0;
}