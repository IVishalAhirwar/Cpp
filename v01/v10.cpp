//Copyright© 2021 Vishal Ahirwar.All Rights Reserved.
#include<stdio.h>
union ipv4{
    long int i32;
    struct oct{
        int a;
        int b;
        int c;
    }desh;

};

int main()
{
    ipv4 adr;
    adr.desh={192,67,87};
    printf("Your IP Address is: \"\n%d.%d.%d\"\n& in decimal: \"%08x\"",adr.desh.a,adr.desh.b,adr.desh.c,adr.i32);
    const char*string="string";
    for(const char*c=string;string!=0;c++)
    {
        if(c==0)break;
        printf("|%c|",c);
        //c[0];
    };

    auto str=string;


    return 0;

};
