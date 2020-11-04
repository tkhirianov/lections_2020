#include <iostream>
#include "mylib.h"
#include "mylib.h" // doesn't matter because of HEADER GUARD in library header
#include "mylib.h"
#include "mylib.h"

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
