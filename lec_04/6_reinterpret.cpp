#include <iostream>

using namespace std;

int main()
{
    int64_t x;
    double y;

    // Я хочу "переосмыслить" сами байты double значения 1.0 как будто они - байты int64_t
    y = 1.0;
    // x = *(int64_t*)(&y);   WARNING!!! Not to do this way! Use reinterpret_cast.
    // x = *static_cast<int64_t *>(&y); ERROR! can't statically cast double* to int64_t*
    x = *reinterpret_cast<int64_t *>(&y);
    
    cout << x << '\n';

    return 0;
}
