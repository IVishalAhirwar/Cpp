#include <iostream>
void GetAlphabet(char StartChar, int Target)
{
    if (Target <= 0)
        return;
    GetAlphabet(char(StartChar), Target - 1);
    std::cerr << " [ " << char(StartChar + Target) << " ], ";
    return;
};

int main(int argc,char*argv[])
{
    if(argc==1)
    {
        std::cerr<<"Usage : char Forword-No.\n";
        return 1;
    }
    GetAlphabet('A', 25);
    return 0;
}