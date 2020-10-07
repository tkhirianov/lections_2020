#include <iostream>
#include <unordered_set>
#include <string>

void set_example()
{
    std::unordered_set<std::string> words;
    std::string word;

    getline(std::cin, word);
    while (word != "") {
        words.insert(word);
        getline(std::cin, word);
    }

    for(auto &word: words) {
        std::cout << word << '\t';
    }
    std::cout << std::endl;

    std::cout << "Enter key to find in set: ";
    std::cin >> word;

    if (words.find(word) != words.end()) {
        std::cout  << "Found it!\n";
    } else {
        std::cout  << "Not found it...\n";
    }
}

int main()
{
    set_example();
    return 0;
}
