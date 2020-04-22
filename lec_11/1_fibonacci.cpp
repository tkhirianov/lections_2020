#include <iostream>
#include <cassert>


uint64_t fib_recursive(int n)
{
    assert(n >= 0);

    if (n == 0 or n == 1) {
        return n;
    } else {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

uint64_t fib_dynamic(int n)
{
    uint64_t result;
    uint64_t *fib = new uint64_t[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    result = fib[n];
    delete[] fib;
    return result;
}


int main()
{
    uint64_t (*fib)(int);
    int version = 0;
    std::cout << "Which version of Fibonacci function to use? (0 - recursive, 1 - dynamic)\n";
    std::cin >> version;
    if (version == 0) {
        fib = fib_recursive;
    } else {
        fib = fib_dynamic;
    }

    for (int n = 0; n <= 100; n++) {
        std::cout << n << '\t' << fib(n) << '\n';
    }

    return 0;
}
