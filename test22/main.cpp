#include <iostream>
#include <stdio.h>
//#define TESTING
//#undef TESTING
template<typename T>
int size(T*t)
{
    return sizeof(t)/sizeof(T);
};

void unique_numbers(int numbers[], unsigned int collection_size)
{

    // Don't modify anthing above this line
    // Your code should go below this line

    int *unique_data = new int[collection_size];
    int counter{0};

    for (short i = 0; i < collection_size; ++i)
    {
        bool already_in{false};

        for (short j = 0; j < collection_size; ++j)
        {
            if (numbers[j] == numbers[i] && i != j)
            {
                already_in = true;
#ifdef TESTING
                std::cout << "DUPLICATE : j...\n";
#endif
            };
#ifdef TESTING
            std::cout << "j is running ... \n";
#endif
            break;
        };

#ifdef TESTING
        std::cout << already_in << "\n";
        std::cout << numbers[i] << "\n";
#endif
        if (already_in == true)
        {
            unique_data[counter] = numbers[i];
            ++counter;
#ifdef TESTING
            std::cout << "counter increamented***\n";
#endif
        };
    };
// std::cout<<counter;
#ifdef TESTING
    std::cout << "counter : " << counter << "\n";
#endif
#ifndef TESTING
    std::cout << "the collection contains " << counter << " unique numbers, they are :  ";
    for (short i = 0; i < counter; ++i)
    {
        std::cout << *(unique_data + 1) << " ";
    };
#endif
    delete unique_data;
}
int main(void)
{
    int arr[20]{343, 42, 3, 42, 34, 5, 24, 44, 123, 322, 3, 43, 4, 44, 55, 66, 64, 45, 4, 4};
    unique_numbers(arr, 20);
    std::cerr << "\n";
    return 0;
};
