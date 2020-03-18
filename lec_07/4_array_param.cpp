#include <iostream>

using namespace std; // really it's bad to do such way!

void print_array2d(int *p, int N, int M)
{
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << p[i*M + j] << '\t'; // A[i][j]
        }
        cout << '\n';
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    int A[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            A[i][j] = i*M + j;
        }
    }

    print_array2d(reinterpret_cast<int*>(A), N, M);

    // memory investigation
    int *p = reinterpret_cast<int *>(A);
    for(int i = 0; i < M*N; i++) {
        cout << *(p + i) << ' ';
    }

    return 0;
}

