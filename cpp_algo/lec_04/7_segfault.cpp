#include <iostream>

int main()
{
    int x = 2;
    int A[10];
    int y = 256;
    
    A[10] = 1;
    std::cout << x << ' ' << y << '\n';

    for(y = 0; y < 100; y++)  // выход за границы массива - undefined behaviour
    { // (It's worse than Segmentation fault!!!)
        A[y] = (y + 1) % 5;
        std::cout << A[y] << '\n';
    }

    return 0;
}
