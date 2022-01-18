namespace v
{
#include <iostream>
    void project1();
    void assignment1();
};
void v::project1()
{
    std::cin.ignore();
    std::cout << "[Display Message] : Hello World with C++20\n";
    std::cerr << "[CERR Message] : Hello World with C++20\n";
    std::clog << "[CLOG Message] : Hello World with C++20\n";
    // #include<string.h>
    std::cerr << "Please Enter Your Full Name : :)_";
    std::string Full_Name;
    std::getline(std::cin, Full_Name);

    std::cerr << "did You typed this Name : " << Full_Name << "\n";

    std::cin.get();
    // std::cout<<"Hello World With C++20\n";
    // int value =5/0;
    // std::cout<<value<<"\n";
    // std::cin.get();
};
void v::assignment1()
{
    //ask for user where he/she live & store it in a variable
    std::cin.ignore();
    std::cerr << "Where do You Live ???";
    std::string Country_Name;
    std::getline(std::cin, Country_Name);
    //print your custom messagefor the user with entered country you stored in vriable;
    std::cerr << "I have heard great thing about " << Country_Name << ", I would like to go there!\n";
    std::cin.get();
};
