#include <iostream>
template <typename T>
void print(T t)
{
    std::cerr << t << "\n";
};

// memory leaks
int main(void)
{
    /*
    int *ptr1{new int{120}};
    print(*ptr1);
    int age{};
    print("Enter Your Age");
    std::cin >> age;
    int *nptr = ptr1;
    ptr1 = &age;
    print("age via ptr1  : ");
    print(*ptr1);
    print(*nptr);
    */
    {
        // here is a simple example of memory leaks
        int *ptr{new int{90}};
        print(*ptr);
    } // out of this scope we are looking peace of memory allocated by ptr

    std::cerr << "\n------------------------------\n"
                 " -Program Successfuly Executed-\n"
                 "-------------------------------\n";
    return 0;
}