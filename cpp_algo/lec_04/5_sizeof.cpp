#include <iostream>

using namespace std;

struct t_Pair {
    int a;
    int b;
};

int main()
{
    int8_t x;
    int y;
    long long int z;
    float a;
    double b;
    t_Pair p;

    cout << sizeof(x) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(int*) << '\n';
    cout << sizeof(z) << '\n';
    cout << sizeof(a) << '\n';
    cout << sizeof(b) << '\n';
    cout << sizeof(p) << '\n';

    cout << sizeof(&x) << '\n';
    cout << sizeof(&y) << '\n';
    cout << sizeof(&z) << '\n';
    cout << sizeof(&a) << '\n';
    cout << sizeof(&b) << '\n';
    cout << sizeof(&p) << '\n';

    return 0;
}
