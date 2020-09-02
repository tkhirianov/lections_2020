#include <iostream>

/**
* Hanoi solution finder.
* param i: start pin number
* param k: finish pin number
* param n: number of disks
*/

void hanoi(int i, int k, int n)
{
    if (n == 1) {
        std::cout << "Move disk 1 from pin " << i 
                  << " to pin " << k << ".\n";
    } else {
        int tmp = 6 - i - k; // third pin (temporary)
        hanoi(i, tmp, n - 1);
        std::cout << "Move disk " << n << " from pin " << i 
                  << " to pin " << k << ".\n";
        hanoi(tmp, k, n - 1);
    }
}

int main()
{
    hanoi(1, 2, 4);

    return 0;
}
