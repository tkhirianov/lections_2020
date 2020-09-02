#include <iostream>

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

int main()
{
    using namespace std;
    int x, y;

    cout << "Enter integer. x = ";
    cin >> x;
    cout << "Enter integer. y = ";
    cin >> y;
    cout << "GCD(x, y) = " << euclid_gcd(x, y) << endl;

    return 0;
}
