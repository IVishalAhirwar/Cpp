#include<iostream>
int main()
{
    char Vowels[]{"aeiouAEOIU"};
    unsigned int numberOfVowels{0};
    std::string name;
    std::cout<<"Please Enter Sentence or Your Name : ";
    std::getline(std::cin,name);

    for(auto n:name)
    {
        for(auto v:Vowels)
        {
            if(n==v)
            {
                ++numberOfVowels;
            };
        };
    };
    std::cout<<"Total Vowels Found within sentence : "<<numberOfVowels<<"\n";

    return 0;
}
