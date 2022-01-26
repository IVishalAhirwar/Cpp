#include <iostream>
#include <ctype.h>
void How_Many_Vowels_And_Consonants(const char *const str, const int &size)
{
    unsigned int vowels_count{0}, consonant_count{0};
    const char vowels[]{"aeiou"};
    bool is_vowels{false};
    for (auto i{0}; i < size; ++i)
    {

        if (std::isalpha(str[i]))
        {
            is_vowels = false;

            for (auto j{0}; j < std::size(vowels); ++j)
            {

                if (std::tolower(str[i]) == vowels[j])
                {
                    ++vowels_count;
                    is_vowels = true;
                    break;
                };
            };
            if (is_vowels == false)
            {
                ++consonant_count;
            };
        };
    };
    std::cout << "\n\nvowels : " << vowels_count << "\nconsonants : " << consonant_count << "\n";
};

int main(void)
{
    char str[]{"the sky is blue."};
    How_Many_Vowels_And_Consonants(str, std::size(str));
    return 0;
}