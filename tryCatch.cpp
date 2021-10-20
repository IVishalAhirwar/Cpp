/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!  

#include<iostream>
class myex:public std::exception{
    public:
    char* what(){return "\n[V-Error]Division by Zero !";};
};

int main()
{
    try
    {
        int a=1,b=0;
       if(b==0)throw myex();
       int c=a/b;

    }catch(myex e)
    {
        std::cout<<"\n{Error] -"<<e.what()<<"\n";
    };
    std::cout<<"\nbye!";


}
