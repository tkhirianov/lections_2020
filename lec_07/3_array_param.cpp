#include <iostream>

using namespace std; // really it's bad to do such way!

const int M_MAXIMAL = 100;

void print_array2d(int A[][M_MAXIMAL], int N, int M)
{
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << A[i][j] << '\t';
        }
        cout << '\n';
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    int A[N][M_MAXIMAL];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            A[i][j] = i*M + j;
        }
    }

    print_array2d(A, N, M);

    // memory investigation
    int *p = reinterpret_cast<int *>(A);
    for(int i = 0; i < M*N; i++) {
        cout << *(p + i) << ' ';
    }

    return 0;
}

