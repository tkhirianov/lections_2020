#include <string>
#include <iostream>
#include <vector>

std::vector<int> prefix_function_kmp(std::string s)
{
    int n = s.length();
    std::vector<int> pi(n, 0);
    for (int i = 1; i < n; ++i) {
        int k = pi[i-1];
        while (k > 0 and s[i] != s[k]) {
            k = pi[k-1];
        }
        if (s[i] == s[k])
            k += 1;
        pi[i] = k;
    }
    return pi;
}

int main()
{
    std::string line;
    getline(std::cin, line);
    std::string tmp;
    getline(std::cin, tmp);

    std::string summary = tmp + '#' + line;
    std::vector<int> pi = prefix_function_kmp(summary);
    
    int counter = 0;
    for (auto x: pi) {
        if (x == tmp.size())
            counter++;
    }
    std::cout << "Number of cases template is substring in string: " << counter << std::endl;
}
