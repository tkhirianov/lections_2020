#include <iostream>
#include <cassert>
#include <vector>


double max_backpack_value(std::vector<std::pair<int, double>> treasures,
                            int capacity)
{
    // 2D array of answers - to be filled in.
    std::vector<std::vector<double>> F;
    F.resize(capacity + 1);
    for (int i = 0; i <= capacity; i++) {
        F[i].resize(treasures.size() + 1);
    }
    std::cout << "DEBUG 1\n";

    // base cases:
    for (int i = 0; i <= capacity; i++) {
        F[i][0] = 0;
    }
    for (int j = 0; j <= treasures.size(); j++) {
        F[0][j] = 0;
    }
    std::cout << "DEBUG 2\n";

    // recursive cases:
    for (int j = 1; j <= treasures.size(); j++) {
        int weight = treasures[j-1].first;
        double value = treasures[j-1].second;

        for (int k = 1; k < weight; k++) {
            F[k][j] = F[k][j-1];
        }
        for (int k = weight; k <= capacity; k++) {
            F[k][j] = std::max(F[k][j-1], value + F[k-weight][j-1]);
        }
    }
    
    return F[capacity][treasures.size()];
}


int main()
{
    int treasures_number;
    std::cout << "Enter number of treasures:";
    std::cin >> treasures_number;

    std::vector<std::pair<int, double>> treasures;
    for (int i = 0; i < treasures_number; i++) {
        int weight;
        double value;
        std::cout << "Enter treasure[" << i << "] weight and value:";
        std::cin >> weight >> value;
        treasures.push_back(std::make_pair(weight, value));
    }

    int capacity;
    std::cout << "Enter backpack carrying capacity:";
    std::cin >> capacity;

    std::cout << max_backpack_value(treasures, capacity) << '\n';

    return 0;
}
