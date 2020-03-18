#include <iostream>

using namespace std;

int main()
{
    int N = 5;
    int A[N] = {1, 3, 2, 4, 5};
    
    bool is_sorted = true;
    int i = 0;
    while (i < N-1)
    {
        if (A[i] > A[i+1]) {
            is_sorted = false;
            break;
        }
        i += 1;
    }

    cout << is_sorted << '\n';
    
    return 0;
}
