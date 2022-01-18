#include<iostream>
#include<iomanip>
int main(void)
{
    std::cerr<<"Printing data in Table Form : \n\n";
    for(unsigned int row{0};row<250000;++row)
    {
        for(unsigned int col{0};col<5;++col)
        {
            std::cerr<<" ( column="<<std::setw(7)<<col<<", row="<<std::setw(7)<<row<<" ),";
        };
        std::cerr<<"\n";
    };
    std::cout<<"Done\n";

    return 0;
}