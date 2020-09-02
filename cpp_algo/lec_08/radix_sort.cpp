#include <iostream>

using namespace std;

void radix_sort(int *A, int N)
{
    int *a0 = new int[N];
    int *a1 = new int[N];
    
    for(int radix = 0; radix < 32; radix++) {
        int a0_size = 0;
        int a1_size = 0;
        for(int i = 0; i < N; i++) {
            if ((A[i] & (1 << radix)) == 0)
                a0[a0_size++] = A[i];
            else
                a1[a1_size++] = A[i];
        }
        for(int i = 0; i < a0_size; i++)
            A[i] = a0[i];
        for(int i = 0; i < a1_size; i++)
            A[a0_size + i] = a1[i];
    }
    delete[] a0;
    delete[] a1;
}

void generate_random_array(int A[], int N, int M)
{
    for(int i = 0; i < N; i++)
        A[i] = rand() % M;
}

void print_array(int A[], int N)
{
    for(int i = 0; i < N; i++)
        cout << A[i] << '\t';
    cout << '\n';
}

int main()
{
    int N = 10;
    int A[N];

    generate_random_array(A, N, 1000);
    print_array(A, N);
    radix_sort(A, N);
    print_array(A, N);

    return 0;
}

