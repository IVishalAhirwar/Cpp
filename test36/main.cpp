#include <iostream>
#define NEWLINE std::cerr << "\n";
#define NEW(type, size) (type *)malloc(sizeof(type) * size);
#define DEL(ptr) free(ptr);

int main()
{
    int *ptr_temp = NEW(int, 50000);
    DEL(ptr_temp);
    ptr_temp = nullptr;

    /*
    int *ptr_1{(int*)malloc(sizeof(int))};
    //*ptr_1 =120;
    NEWLINE
    std::cerr << "ptr_1 data : " << *ptr_1;
    NEWLINE
    std::cerr << "ptr_1 address : " << ptr_1;
    NEWLINE
   free(ptr_1); //delete ptr_1;
  //  delete ptr_1;
    ptr_1 = nullptr;

    //*ptr_1 = 100;
    NEWLINE
#ifdef RUN
    std::cerr << "again ptr_1 data : " << *ptr_1;
    NEWLINE
#endif
    NEWLINE
    std::cerr << "ptr_1 address : " << ptr_1;
    NEWLINE
    for (int i{0}; i < 10241024345; ++i)
    {
        try
        {
            int *ptr{new int[i + (1024 * 1024 * 1024)]};
            NEWLINE
            std::cerr << "memory size : " << sizeof(ptr) / 1024.0 << "KB";
            NEWLINE
        }
        catch (std::exception &ex)
        {
            NEWLINE
            std::cerr << "Crashed : " << ex.what();
            NEWLINE
        }
    }
    */
    std::cerr << "Memory size : " << sizeof(ptr_temp) / (1024 * 1024 * 1.0) << "MB";
    NEWLINE
    std::cerr << "\n------------------------------\n"
                 " -Program Successfuly Executed-\n"
                 "-------------------------------\n";

    return 0;
}