#include <iostream>
#include <string>

inline bool is_alpha(char symbol)
{
    return (symbol >= 'a' and symbol <= 'z') or
           (symbol >= 'A' and symbol <= 'Z');
}

int main()
{
    std::string s;
    std::getline(std::cin, s);
    int word_len = 0;
    int pos = 0;
out_of_word:
    if (pos >= s.length()) goto the_end;
    if (is_alpha(s[pos])) {
        pos++;
        word_len = 1;
        goto in_word;
    } else {
        pos++;
        goto out_of_word;
    }
in_word:
    if (pos >= s.length()) goto the_end;
    if (is_alpha(s[pos])) {
        pos++;
        word_len += 1;
        goto in_word;
    } else {
        pos++;
        std::cout << "Word length: " << word_len << '\n';
        goto out_of_word;
    }
the_end:


    std::cout << s << '\n';

    return 0;
}
