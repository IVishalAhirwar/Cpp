#include <iostream>
int main(void)
{
    /*
    int arr[5]{};
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); ++i)
        i != 4 ? std::cerr << arr[i] << ", " : std::cerr << "\n";
    **/
    short Year{0}, Day{0};

    std::cerr << "Please Enter Calender Year,";
    std::cin >> Year;
    std::cerr << "Now Please Enter Day of First Week,";
    std::cin >> Day;

    return 0;
};
