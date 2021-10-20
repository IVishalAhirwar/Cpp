/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>

struct xStruct
{
    int x;
    int y;
};
class X
{
private:
    xStruct x;

public:
    X(xStruct &ref)
    {
        x.x = ref.x;
        x.y = ref.y;
    };

    void SetxStruct(const xStruct &ref);
    xStruct GetxStruct() const;
};
void X::SetxStruct(const xStruct &ref)
{
    this->x.x = ref.x;
    this->x.y = ref.y;
};
xStruct X::GetxStruct() const
{
    return this->x;
};

int main(int argv,char**argc)
{
    xStruct x;
    x.x=1;
    x.y=2;
    X xClass=X(x);
    std::cout<<" x : "<<xClass.GetxStruct().x<<" y : "<<xClass.GetxStruct().y<<"\n";
    x.x=10;
    xClass.SetxStruct(x);
    std::cout<<"\nAgain x : "<<xClass.GetxStruct().x<<" y : "<<xClass.GetxStruct().y<<"\n";


};
