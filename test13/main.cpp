#include <iostream>

void printMessage(std::string str)
{
    std::cerr << "\nit's" << str << ",\n";
};

int main(void)
{
    while (true)
    {
        std::cerr << "Enter, Day Number\n";
        short input{0};
        std::cin>>input;
        switch (input)
        {
        case 7:
        {
            printMessage("Sunday");
            break;
        };
        case 1:
        {
            printMessage("Monday");
            break;
        };
        case 2:
        {
            printMessage("Tuesday");
            break;
        };
        case 3:
        {
            printMessage("Wednesday");
            break;
        };
        case 4:
        {
            printMessage("Thursday");
            break;
        };
        case 5:
        {
            printMessage("Friday");
            break;
        };
        case 6:
        {
            printMessage("Saturday");
            break;
        };
        default:
        {
            printMessage("--InVaLiD InPuT--");
            break;
        };
        };
    }
}