
#include <iostream>
int main(void)
{
    float Cel{0.0f};
    std::cerr << "Please Enter Temprature data in Celcius : ";
    std::cin >> Cel;
    float F = (9.0 / 5) * Cel + 32;
    std::cerr << "Temprature in Fahrenheit : " << F << "\n";
    return 0;
}
