#include <iostream>

using namespace std; // really it's bad to do such way!

int main()
{
    int N;
    N = 3;

    int A[N];
    for(int i = 0; i < N; i++) {
        A[i] = i+1;
    }

    for(int i = 0; i < N; i++) {
        cout << A[i] << '\t';
    }
    cout << endl;

    return 0;
}
