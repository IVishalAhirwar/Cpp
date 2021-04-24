//Copyright©2021 Vishal Ahirwar.All Rights Reserved.
#include <stdio.h>
struct CatlogCard
{
    char *Title;
    char *Author;
    char *About;
    int ISBN;
    int DoP;
    int DoA;
};

int main()
{
    CatlogCard card1;
    printf("\nEnter Your Books Title:");
    scanf("%s", &card1.Title);
    printf("\nEnter Books Author Name:");
    scanf("%s", &card1.Author);
    printf("\nEnter About Your Book::");
    scanf("%s", &card1.About);
    printf("\n\nBOOKS.\n\n\n");
    printf("Book Title:%s\nAuthor:%s\nAbout:%s", card1.Title, card1.Author, card1.About);
    return 0;
};
