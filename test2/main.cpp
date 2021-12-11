#include<iostream>
int main(int argc,char*argv[])
{
    if(argc==1)
    {
        std::cerr<<"Usage : v-cli arg arg1 arg2 arg3 ...\n";
        std::cerr<<"try again!\n";
        return 0;
    };

    for(int i=0;i<argc;i++){

        if((argv[i] =="-v") ==0)
        {
            std::cerr<<"\ncli version 1.1.1 Copyright(c)2021-22 vishal ahirwar.\n\n";
        }else
        {
            std::cerr<<" [ "<<argv[i]<<" ] ";
        };

    }
        return 0;

}