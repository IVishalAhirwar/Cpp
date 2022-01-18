#include <iostream>
#include <time.h>

int main(void)
{
    {
        constexpr size_t max_counter{10};
        size_t counter{};
        for (counter = {0}; counter < max_counter; ++counter)
            std::cerr << counter << ". Hello, World\r";
        std::cerr << "Done.\n";
    }
    return 0;
}