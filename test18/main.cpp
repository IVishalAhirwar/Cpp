#include<iostream>
int main(void)
{
       unsigned int count{1};
    unsigned int res{0};
    while(true)
    {
        res={19*count};
        if(res>100 && res<1000)
        {
            std::cout<<res<<" ";
        }else if(res >=1000)
        {
            break;
        };
        ++count;
        
    };
    return 0;

}