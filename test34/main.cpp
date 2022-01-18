#include <iostream>
#define NEWLINE std::cerr << "\n";
template <typename T>
void printArr(T *arr, const int &size)
{
    NEWLINE
    for (auto i = 0; i < size; ++i)
    {
        std::cerr << *(arr + i) << ", ";
    };
    NEWLINE
};
template <typename T>
void swapArr(T *t1, T *t2, const int &size)
{
    T temp{};
    for (auto i = 0; i < size; ++i)
    {
        temp = *(t1 + i);
        *(t1 + i) = *(t2 + i);
        *(t2 + i) = temp;
    };
}
int main()
{
    int arr1[]{1, 2, 3, 4, 5, 6};
    int arr2[6]{0};

    std::string arr3[]{"Vishal", "Rohan", "Rakesh", "Dj Rakesh", "Mohan"};
    std::string arr4[]{"A", "B", "C", "D", "E"};

    NEWLINE
    std::cerr << "Before Swap : ";
    NEWLINE
    printArr(arr3, std::size(arr3));
    printArr(arr4, std::size(arr4));
    NEWLINE
    std::cerr << "-----------------------------";
    NEWLINE
    std::cerr << "-----------------------------";
    NEWLINE
    NEWLINE
    printArr(arr1, std::size(arr1));
    printArr(arr2, std::size(arr2));

    swapArr(arr1, arr2, std::size(arr1));
    swapArr(arr3, arr4, std::size(arr4));

    NEWLINE
    std::cerr << "After Swap : ";

    NEWLINE
    printArr(arr3, std::size(arr3));
    printArr(arr4, std::size(arr4));
    std::cerr << "-----------------------------";
    NEWLINE
    std::cerr << "-----------------------------";
    NEWLINE
    NEWLINE
    printArr(arr1, std::size(arr1));
    printArr(arr2, std::size(arr2));

    NEWLINE
    std::cerr << "-----------------------------";
    NEWLINE
    std::cerr << "Program Successfuly Executed!";
    NEWLINE
    std::cerr << "-----------------------------";
    NEWLINE
    return 0;
}