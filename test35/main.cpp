#include <iostream>
#define NEWLINE std::cerr << "\n";
template <typename T>
void copy(T *source, T *Dest, const int &size)
{
    for (short i = 0; i < size; ++i)
    {
        *(Dest + i) = *(source + i);
    };
    delete[] source;
    source = nullptr;
}
int main()
{
    int *ptr1{nullptr};
    ptr1 = (int *)malloc(5 * sizeof(int));
    for (size_t i = 0; i < 5; ++i)
    {
        ptr1[i] = i + 5;
    };
    int *ptr2 = (int *)malloc(10 * sizeof(int));
    copy(ptr1, ptr2, 5);
    ptr1 = ptr2;
    ptr2 = NULL;

    for (size_t i = 5; i < 10; ++i)
    {
        ptr1[i] = 120;
    };
    for (size_t i = 0; i < 10; ++i)
    {
        printf("%d, ", ptr1[i]);
    }
    NEWLINE
    return 0;
}