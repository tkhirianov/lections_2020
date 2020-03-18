#include <iostream>
using namespace std;

const int MAX_A_SIZE = 100;

int main()
{
    int N = MAX_A_SIZE;
    int A[N];
    int top = 0;
    int x;

    cin >> x;
    while (x != 0) {
        A[top++] = x;

        cin >> x;
    }

    for(int i = 0; i < top; ++i) {
        cout << A[i] << '\t';
    }
    cout << '\n';

    return 0;
}
