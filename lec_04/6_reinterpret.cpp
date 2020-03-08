#include <iostream>

using namespace std;

int main()
{
    int64_t x;
    double y;

    y = 0.0;
    // x = *static_cast<int64_t *>(&y); ERROR! can't statically cast double* to int64_t*
    x = *reinterpret_cast<int64_t *>(&y);
    
    cout << x << '\n';

    return 0;
}
