//Copyright©2021 Ahirwar Corp.
#include <stdio.h>

class c
{
    int pwd;

public:
    int GetPwd() const;
    void Setpwd(const int &pwd);
};
int c::GetPwd() const
{
    return pwd;
};
void c::Setpwd(const int &pwd)
{
    this->pwd = pwd;
};

int main()
{
    c c01;
    //int& pwd=c01.GetPwd();
    printf("Your Current PassWord: %d", c01.GetPwd());
    printf("\nEnter New Password: ");
    int pwd = 0;
    scanf("%d", &pwd);
    c01.Setpwd(pwd);
    printf("\nYour New PassWord: %d", c01.GetPwd());

    return 0;
};
