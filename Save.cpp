/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!

#include <iostream>
#include <fstream>
#include <string>
class Item
{
private:
    std::string name;
    int price;
    int q;

public:
    void print() const;
    friend std::ostream &operator<<(std::ostream &out, const Item &ref);
    friend std::istream &operator>>(std::istream &in, Item &ref);
    friend std::ifstream &operator>>(std::ifstream &r, Item &ref);
};
void Item::print() const
{
    std::cout << "\n----------------------------------------\n";
    std::cout << "Product Name : " << this->name << "\n"
              << "Product Price : " << this->price << "\nProduct Quntity : " << this->q << "\n";
    std::cout << "\n----------------------------------------\n";
};

std::ifstream &operator>>(std::ifstream &r, Item &ref)
{
    r >> ref.name >> ref.price >> ref.q;
    return r;
};
std::istream &operator>>(std::istream &in, Item &ref)
{
    std::cout << "\nPlease Enter\n-Product Name : ";
    in >> ref.name;
    std::cout << "-Product Price : ";
    in >> ref.price;
    std::cout << "-Product Quantity : ";
    in >> ref.q;
    return in;
};

std::ostream &operator<<(std::ostream &out, const Item &ref)
{
    out << ref.name << "\n"
        << ref.price << "\n"
        << ref.q << "\n";
    return out;
};
void Save(Item &);

int main(int argv, char *argc[])
{
    std::ifstream in("save.vsl");
    Item item;
    if (in)
    {
        while (!in.eof())
        {
            in >> item;
            item.print();
        };

        in.close();

        std::cout << "\nWould You like to save more Item?? [type] -y/n : ";
        char x;
        std::cin >> x;
        if (x == 'y' || x == 'Y')
        {
            Save(item);
        }
        else
        {
            std::cout << "\nPress Any to quit()\n";
            std::cin.get();
        };
    }
    else
    {
        std::cout << "\n[Message] Creating one data file...\n";
        Save(item);
    };
    return 0;
};

void Save(Item &item)
{
    std::ofstream out("save.vsl", std::ios::app);
    while (1)
    {

        std::cout << "\nPress x to quit Program or s to continue saving more item - \n";
        char x;
        std::cin >> x;
        if (x == 'x' || x == 'X')
        {
            break;
        }
        else if (x == 's' || x == 'S')
        {
            std::cin >> item;
            out << item;
        }
        else
        {
            std::cout << "\n[Error] - No Command Found !\n";
        };
    };
    out.close();
    std::cout << "\nPress Any key to quit()\n";
    std::cin.get();
};
