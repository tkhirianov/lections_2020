#include <iostream>
#include <cassert>
#include <vector>


uint64_t combinations_recursive(int i, int j)
{
    assert(i > 0 and j > 0);

    if (i == 1 or j == 1) {
        return 1;
    } else {
        return combinations_recursive(i, j-1) + combinations_recursive(i-1, j);
    }
}

uint64_t combinations_dynamic(int n, int m)
{
    std::vector<std::vector<uint64_t>> K;
    K.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        K[i].resize(m + 1);
    }

    // base cases:
    for (int i = 1; i <= n; i++) {
        K[i][1] = 1;
    }
    for (int j = 1; j <= m; j++) {
        K[1][j] = 1;
    }

    // recursive cases:
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            K[i][j] = K[i-1][j] + K[i][j-1];
        }
    }
    
    return K[n][m];
}


int main()
{
    uint64_t (*combinations)(int, int);
    int version = 0;
    std::cout << "Which version of function to use? (0 - recursive, 1 - dynamic)\n";
    std::cin >> version;
    if (version == 0) {
        combinations = combinations_recursive;
    } else {
        combinations = combinations_dynamic;
    }

    for (int i = 1; i <= 30; i++) {
        for (int j = 1; j <= 12; j++) {
            std::cout << combinations(i, j) << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}
