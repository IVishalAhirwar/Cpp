#include <iostream>
/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!
class Complex
{
private:
    int real;
    int img;

    friend Complex operator+(const Complex &, const Complex &);
    friend Complex operator-(const Complex &, const Complex &);
    friend std::ostream operator<<(std::ostream&,const Complex&);

public:
    Complex();
    Complex(int, int);
    void print() const;
    Complex Add(const Complex ref);
};
std::ostream& operator<<(std::ostream& o,const Complex& ref)
{
     o<<ref.real<<" + i"<<ref.img<<"\n";
    return o;
};

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
};
Complex operator-(const Complex &ref1, const Complex &ref2)
{
    Complex temp;
    temp.real = ref1.real - ref2.real;
    temp.img = ref1.img - ref2.img;
    return temp;
};

Complex::Complex()
{
    this->img = 0;
    this->real = 0;
};

Complex Complex::Add(const Complex ref)
{
    Complex temp;
    temp.real = this->real + ref.real;
    temp.img = this->img + ref.img;
    return temp;
};

void Complex::print() const { std::cout << "\n------------------------\n"
                                        << this->real << " + i" << this->img << "\n------------------------\n"; };

Complex::Complex(int real = 0, int img = 0)
{
    this->img = img;
    this->real = real;
};

int main()
{
    Complex c1(2, 5), c2(34, 5);
    Complex c3(0, 0);
    c1.print();
    c2.print();
    c3.print();

    std::cout << "\n\nAfter Adding c1+c2---\n\n";
    c3 = c1 + c2;
    c3.print();
    c3 = c1 - c2;
    c3.print();

    Complex c4;
    c4=c3+c1;
    std::cout<<c4;
    

    char x;
    std::cin >> x;
    return 0;
};
