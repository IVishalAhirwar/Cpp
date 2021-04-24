//Copyright©2021 Vishal Ahirwar.All Rights reserved.
#include <cstdio>
void fa()
{
    puts("Fa called!");
};
void fb()
{
    puts("Fb called!");
};
void fc()
{
    puts("Fc called!");
};
void fd()
{
    puts("Fd called!");
};
void fe()
{
    puts("Fe called!");
};

void (*pAlpha[])() =
    {fa, fb, fc, fd, fe};
const char *Prompt()
{
    puts("Choose An Option:");
    puts("1.Function fa()");
    puts("2.Function fb()");
    puts("3.Function fc()");
    puts("4.Function fd()");
    puts("5.Function fe()");
    puts("q or Q. Quit.");
    printf(">>>");
    fflush(stdout);

    const int buffz = 16;
    static char response[buffz];
    fgets(response, buffz, stdin);

    return response;
};
int jump(const char *rs)
{
    char code = rs[0];
    if (code == 'q' || code == 'Q')
        return 0;

    size_t func_length = sizeof(pAlpha) / sizeof(pAlpha[0]);
    size_t i = (size_t)code - '0';
    if (i < 1 || i > func_length)
    {
        puts("Invalid Choice!");
        return 1;
    }
    else
    {
        pAlpha[i - 1]();
        return 1;
    };
};
int main()
{
    while (jump(Prompt()))
        ;
    puts("\nDone.");
    return 0;
};
