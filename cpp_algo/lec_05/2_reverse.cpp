#include <iostream>

using namespace std;

int main()
{
    int N = 5;
    int A[N] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < N / 2; ++i) {
        int tmp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = tmp;
    }
    
    for(int i = 0; i < N; ++i) {
        cout << A[i] << '\t';
    }
    cout << '\n';

    return 0;
}
