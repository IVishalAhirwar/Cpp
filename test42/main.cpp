#include <iostream>
#include <cstring>
#include <iomanip>
int main(void)
{
    // char *yname{new char[25]}, *zname{new char[25]};
    // std::cout << "EnterY your name : ";
    // std::cin >> yname;
    // std::cout << "EnterZ your name : ";
    // std::cin >> zname;
    // std::cout << "name are same : ";
    // if (std::strcmp(yname, zname))
    // {
    //     std::cout << "false";
    // }
    // else
    // {
    //     std::cout << "true";
    // };
    const char *const mess{"I checked in for the night at Out O The Way motel. What a bad choice that was. First I took a shower and a spider crawled out of the drain. Next, the towel rack fell down when I reached for the one small bath towel. This allowed the towel to fall halfway into the toilet. I tried to watch a movie, but the remote control was sticky and wouldn’t stop scrolling through the channels. I gave up for the night and crawled into bed. I stretched out my leg and felt something furry by my foot. Filled with fear, I reached down and to my surprise, I pulled out a raccoon skin pair of underwear. After my initial relief that it wasn’t alive, the image of a fat, ugly businessman wearing raccoon skin briefs filled my brain. I jumped out of the bed, threw my toothbrush into my bag, and sprinted towards my car."};
    char a{};
    while (true)
    {
        std::cout << "search line in paragraph starting with Alphabet : ";
        std::cin >> a;
        if (a == 'q' || a == 'Q' || a == 'x')
            break;
        const char *line{mess};
        while ((line = std::strrchr(line, a)) != nullptr)
        {
            /* code */
            std::cout << line << "\n----------------------------------------------------------------------------\n\n";

            ++line;
        };
    };

    // std::cout<<yname<<"\n";
    // std::cout<<zname;

    // delete[] yname;
    // delete[] zname;
    // yname = nullptr;
    // zname = nullptr;
    return 0;
};
