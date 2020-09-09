#include <iostream>

template <typename T>
T my_abs(T x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main()
{
    std::cout << my_abs('A') << "\n";
    std::cout << my_abs(-23) << "\n";
    std::cout << my_abs(-3.5) << "\n";

    return 0;
}
