//#define TESTING
#include <iostream>
#include <iomanip>
bool IsSorted(int arr[], int size)
{
    bool IsSorted = true;
    for (int i{0}; i < size; ++i)
    {
        for (int j{i}; j < size; ++j)
        {
            if (arr[i] <= arr[j])
            {
                std::cerr << arr[i] << ", ";
                IsSorted = true;
#ifdef TESTING
                std::cerr << "\n-IsSorted true-\n";
#endif
            }
            else
            {
                IsSorted = false;
#ifdef TESTING
                std::cerr << "-IsSorted false-\n";
#endif
                break;
            };
        };
        std::cerr << "\n";
        if (!IsSorted)
            break;
    };
    return IsSorted;
}
int main()
{
    int arr[]{1, 8, 4, 4, 5};
    int arr1[]{11, 222, 333, 444, 555};
    std::cerr << std::boolalpha << "IsSorted : " << IsSorted(arr, std::size(arr)) << "\n";
    std::cerr << "\n-----------------\nIsSorted : " << IsSorted(arr1, std::size(arr1)) << "\n";

    return 0;
}