#include <iostream>

void foo(unsigned char x)
{
    std::cout << " foo(unsigned char) is called\n";
}

void foo(int x)
{
    std::cout << " foo(int) is called\n";
}

void foo(double x)
{
    std::cout << " foo(double) is called\n";
}


int main()
{
    foo('A');
    foo(1);
    foo(4.5);
    foo(23U); //delete to make code work

    return 0;
}
