#include <string>
#include <iostream>


int main()
{
    // This is used to speedup input in automatic testing:
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string hello = "Hello, World! ";
    std::string result;

    std::cout << hello << std::endl;
    int times_to_concatenate;
    std::cin >> times_to_concatenate;
    
    for (int i = 0; i < times_to_concatenate; i++) {
        result += hello;
    }

    //std::cout << result << std::endl;
    return 0;
}
