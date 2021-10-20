#include<iostream>
/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!  


int main(){
    int x[7];
    int sum=0;
    std::cout<<"Enter 7 Value to Get the Sum of : ";
    for(int&X:x)
    {
        std::cin>>X;

    }   ;
    std::cout<<"You Entered : ";
    for(int&X:x)
    {
        std::cout<<X;
        std::cout<<",";
        sum+=X;


    } ;
    std::cout<<"\nSum of  :"<<sum;

}
