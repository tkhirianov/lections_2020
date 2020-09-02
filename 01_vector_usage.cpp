#include <vector>
#include <iostream>
#include <algorithm>

void procedure(int x)
{
    std::cout << x << '\n';
}


int main()
{
    std::vector<int> A;

    for(int i = 0; i < 10; i++)
        A.push_back(i);
    
    // НЕУКЛЮЖАЯ ВЕРСИЯ:
    std::vector<int>::iterator it1 = A.begin();
    while (it1 != A.end()) {
        std::cout << *it1 << "\n";
        ++it1;
    }
    // почти УКЛЮЖАЯ ВЕРСИЯ:
    auto it2 = A.begin();
    while (it2 != A.end()) {
        std::cout << *it2 << "\n";
        ++it2;
    }
    for (auto it3 = A.begin(); it3 != A.end(); ++it3) {
        std::cout << *it3 << "\n";
    }

    std::cout << "for_each:\n";
    std::for_each(A.begin(), A.end(), procedure);

    std::cout << "range based for:\n";
    for (auto x: A) {
        std::cout << x << ' ';
    }

    return 0;
}
