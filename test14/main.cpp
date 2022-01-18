#include <iostream>
/*
888888888*Problem solved
copyright(c)2021-22 Vishal Ahirwar.

*/
void printMessage(std::string str)
{
    std::cerr << "\nit's " << str << ",\n";
};

int main(void)
{
    while (true)
    {
        std::cerr << "\n------------------------------------\nEnter, Today's Day Number\n";
        short input{0}, input1{0};
        while (1)
        {
            std::cerr << "days must be in range<1,7>\nPlease Enter Again,Today's Day Number : ";
            std::cin >> input;
            if (input <= 7)
            {
                break;
            }
            else
                continue;
        };
        switch (input /*continue from here ... unsigned short()*/)
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

        std::cerr << "How many days back you wanna to Go back{PAST},\n";
        std::cin >> input1;
        while (input1 > 7)
        {
            input1 /= 7;
        };
        auto res = (input - input1);
        if (res < 1)
            res += 7;
        switch (res /*continue from here ... unsigned short()*/)
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