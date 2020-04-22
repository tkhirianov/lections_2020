#include <iostream>
#include <cassert>


int min_cost(int n, int price[])
{
    int cost[n + 1];
    // base cases:
    cost[1] = price[1];
    cost[2] = price[1] + price[2];

    for (int i = 3; i <= n; i++) {
        // recursive case:
        cost[i] = std::min(cost[i-1], cost[i-2]) + price[i];
    }
    
    std::cout << "Min cost path (reversed) = [";
    int current = n;
    std::cout << current << " ";
    while(current != 1) {
        if (cost[current - 1] == cost[current] - price[current])
            current = current - 1;
        else if (cost[current - 2] == cost[current] - price[current])
            current = current - 2;
        else
            throw -1; // Nonsence! I should never achive this line!
        std::cout << current << " ";
    }
    std::cout << "]\n";
    
    return cost[n];
}


int main()
{
    int n;
    std::cout << "Hopper economist wants to go from point 1 to point n. Enter n:\n";
    std::cin >> n;
    if (n > 100) {
        std::cout << "Your number is too big! maximum is 100.\n";
        return -1;
    }
    int price[101];
    std::cout << "Enter prices of visiting point (from point 1 to point n):\n";
    for (int i = 1; i <= n; i++) {
        std::cin >> price[i];
    }
   
    std::cout << "Min cost of achieving point n from point 1 is " << min_cost(n, price) << '\n';

    return 0;
}
