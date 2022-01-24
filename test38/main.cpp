#include <iostream>
template <typename T>
void print(T t)
{
    std::cerr << t << "\n";
};

int main()
{
    int size{};
    print("enter size of array ??");
    std::cin >> size;

    int *ptr{new (std::nothrow) int[1024 * 1024 * 1024 * size]{1,2,3,4,5,6,7,8}};
    print("memory requested for allocation GB: ");
    print(size);

    if (ptr)
    {
        print("memory successfully allocated !");
        delete[] ptr;
        ptr=nullptr;
    }
    else
    {
        print("failed to allocate memory !");
    };

    return 0;
}