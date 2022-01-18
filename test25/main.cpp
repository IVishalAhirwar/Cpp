#include <iostream>
int main()
{
    char bad_message[25]{'H', 'E', 'L', 'L', 'O'};
    bad_message[24] = '\0';
    char message[]{"-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n-\nHello, World Bro!\n"};
    printf("%s", message);
    printf("sizeof message : %f MB\n",sizeof(message)/1024.0);
    printf("%s", bad_message);
    return 0;
}