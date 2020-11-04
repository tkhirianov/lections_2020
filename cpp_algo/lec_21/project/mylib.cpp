#include "mylib.h"

int euclid_gcd(int a, int b)
{   // Алгоритм Евклида поиска НОД
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
