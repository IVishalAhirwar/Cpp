#include<iostream>
void print_in_right_order(int n)
{
    if(n<=0)
    {
        return;
    };
    print_in_right_order(n-1);
    std::cerr<<" [ "<<n<<" ], ";
}
void print_in_reverse_order(int n)
{
    if(n<=0)
    {
        std::cerr<<"\n";
        return;
    };
    std::cerr<<" [ "<<n<<" ], ";
    print_in_reverse_order(n-1);
}
int main(void)
{
    std::cerr<<"Print in right order : \n";
    print_in_right_order(15);
    std::cerr<<"\nPrint in reverse order : \n";
    print_in_reverse_order(15);

    return 0;
}