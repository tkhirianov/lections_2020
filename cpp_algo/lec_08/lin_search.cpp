#include <iostream>

using namespace std;

int find(int A[], int N, int x)
{
    for(int i = 0; i < N; i++)
        if (A[i] == x)
            return i;
    return -1;
}

int main()
{
    int N = 10;
    int A[] = {1, 3, 3, 7, 7, 7, 7, 9, 10, 10};
    int x;

    for(int i = 0; i < N; i++)
        cout << A[i] << '\t';
    cout << '\n';
    cin >> x;
    cout << "index of x is: " << find(A, N, x) << '\n';

    return 0;
}

