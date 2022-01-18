#include <iostream>
// struct str
// {
//     int i{0}, j{0}, k{0};
//     double x{0}, y{0};
//     std::string name[12]{};
// };
#include <ctime>
int main()
{
    const char *predictions[]{
        "hey!",
        "hi",
        "whatsapp!",
        "hello!"};
    std::srand(std::time(0));
    printf("%s Vishal,This is Your Assistant ~PI\n", predictions[std::rand() % std::size(predictions)]);

    // struct str *s = (str *)malloc(1 * sizeof(str));
    // std::cout << (s->name[0]) << (s->i);
    // char *message{"\nSuccessfuly Executed!\n"};
    // printf("size of struct type : %lu\n", sizeof(s));
    // printf("%s", message);
    return 0;
}