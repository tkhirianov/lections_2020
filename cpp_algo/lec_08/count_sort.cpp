#include <iostream>

using namespace std;

void count_sort(int A[], int N)
{
    // Я ОБЯЗАН знать диапазон сортируемых чисел (считаю, что они от 0 до 9)
    int F[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < N; i++) {
        F[A[i]]++;
    }
    int i = 0;
    for(int x = 0; x < 10; x++) {  // перебираю всевозможные значения ключа! (их M штук)
        for(int k = 0; k < F[x]; k++) {
            A[i] = x;
            i++;
        }
    }
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

    generate_random_array(A, N, 10);
    print_array(A, N);
    count_sort(A, N);
    print_array(A, N);

    return 0;
}

