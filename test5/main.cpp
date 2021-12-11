#include <iostream>
#include <iomanip>
#include <ios>
struct dateofbirth
{
    unsigned short day{0}, month{0}, year{0};
};

std::istream &operator>>(std::istream &in, struct dateofbirth &d)
{
    std::cerr << "Day : ";
    in >> d.day;
    std::cerr << "Month : ";
    in >> d.month;
    std::cerr << "Year : ";
    in >> d.year;
    return in;
}
struct Info
{
    std::string f_name;
    std::string l_name;

    int age{0};
    dateofbirth dob;
    void Monitor();
};
void Info::Monitor()
{
    const unsigned short col_width{25};
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "LastName" << std::setw(col_width) << "Age" << std::setw(col_width) << "DateOfBirth\n";
    std::cout << std::setw(col_width) << "----------------------------------------------------------------------------\n";
    std::left;

    std::cout << std::setw(col_width) << f_name << std::setw(col_width) << l_name << std::setw(col_width) << age << std::setw(col_width) << "\n";
}
std::istream &operator>>(std::istream &in, struct Info &info)
{
    std::cerr << "First Name : ";
    in >> info.f_name;
    std::cerr << "Last Name : ";
    in >> info.l_name;
    std::cerr << "Age : ";
    in >> info.age;
    std::cerr << "Please Submit Your Date of Birth :)\n";
    in >> info.dob;
    return in;
}
int main(void)
{
    struct Info info[5];
    for(int i=0;i<sizeof(info)/sizeof(struct Info);i++)
    {

    std::cin >>info[i];

    }
       for(int i=0;i<sizeof(info)/sizeof(struct Info);i++)
    {

     (*(info+i)).Monitor();
    
    };
    
   
    return 0;
};
