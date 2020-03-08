#include <iostream>

using namespace std;

struct t_Pair {
    int a;
    int b;
};

t_Pair return_pair(int x)
{
    t_Pair result;

    result.a = x*x;
    result.b = x*x*x;
    return result;
}

int main()
{
    int x;
    cin >> x;

    t_Pair pair_ = return_pair(x);
    cout << pair_.a << ' ' << pair_.b << '\n';

    return 0;
}
