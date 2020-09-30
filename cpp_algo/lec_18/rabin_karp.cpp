#include <iostream>
#include <string>

const P = 257;

uint32_t hash(std::string s)
{
    uint32_t sum = 0;
    uint32_t factor = 1;
    
    for(int i = s.length() - 1; i >= 0; i--) {
        sum += s[i]*factor;
        factor *= P;
    }
} 

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::string pattern;
    std::getline(std::cin, pattern);
    uint32_t pattern_hash = hash(pattern);

    uint32 M = pattern.length();
    
    uint32_t pattern_hash = hash(s);
    


    return 0;
}

