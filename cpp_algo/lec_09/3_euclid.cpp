#include <iostream>

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << '\n';
    return 0;
}

