#include <iostream>
#include <iomanip>
int main()
{
    int Locations[][3][3]{
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}},
        {{1, 2, 3},
         {3, 4, 5},
         {6, 7, 8}},
        {{12, 13, 14},
         {14, 15, 16},
         {17, 18, 19}},
        {{123, 124, 125},
         {126, 127, 128},
         {129, 130, 131}}};
    std::cerr << "printing locations : \n";
    std::cerr << "\n{\n";
    for (short i{0}; i < sizeof(Locations) / sizeof(Locations[0]); ++i)
    {
        std::cerr << std::setw(20) << "{\n"
                  << std::setw(10);
        for (short j{0}; j < (sizeof(Locations[0]) / sizeof(Locations[0][0])); ++j)
        {
            std::cerr << std::setw(25) << "{";
            for (short k{0}; k < sizeof(Locations[0][0]) / sizeof(Locations[0][0][0]); ++k)
            {
                printf("%d,", Locations[i][j][k]);
            };
            std::cerr << "},\n";
        }
        std::cerr << std::setw(20) << "},\n\n";
    };
    std::cerr << "\n\n};";
    return 0;
}