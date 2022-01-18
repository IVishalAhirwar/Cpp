#include<iostream>
#include<ctime>
int main()
{
    std::srand(std::time(0));
    char Predictions[][128]
    {
        "haaa! nothing is here to show you!",
        "well ! come tomarrow!",
        "sorry!",
        "awesome",
        "amazing",
        "insane",
        "cool!"
    };
    while(true)
    {
        std::cin.get();
    std::cerr<<Predictions[std::rand()%(std::size(Predictions)-1)]<<"\n";
    }

    return 0;
}