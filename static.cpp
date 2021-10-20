/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>

class Base
{
private:
    static int count;

public:
    Base()
    {
        this->count++;
    };
    void PrintCount() const;
    void SetCount(const int &);
    int GetCount()const{return this->count;};
    static void PrintCounts(){std::cout<<"Count is : "<<Base::count<<"\n";};
};
int Base::count = 0;

void Base::PrintCount() const { std::cout << "Count is : " << this->count << "\n"; };
void Base::SetCount(const int &ref)
{
    this->count = ref;
};

int main()
{
    Base c,d;
    d.SetCount(45);
    Base::PrintCounts();

}
