#include <iostream>

const int MAX_BINARY_DIGITS_TO_GENERATE = 100;

void permutations(int16_t number, int16_t current, int16_t buffer[], bool used[])
{
    if (current == number) {  // base case
        for(int i = 0; i < number; i++)
            std::cout << buffer[i] << ' ';
        std::cout << '\n';
    } else {  // recursive case
        for (int16_t variant = 0; variant < number; variant++) {
            if (not used[variant]) { // cutting the recursive tree
                buffer[current] = variant;
                used[variant] = true;
                permutations(number, current + 1, buffer, used);
                used[variant] = false;
            }
        }
    }
}


int main()
{
    int16_t n;
    std::cout << "Enter length to generate all permutations: ";
    std::cin >> n;
    if (n > 20) {
        std::cerr << "Your number is too big!";
        return 1;
    } else if (n <= 0) {
        std::cerr << "Your number is negative!";
        return 1;
    }

    int16_t buffer[n];
    bool used[n] = {false}; // suspect that used will be initialized by zeroes (to be interpreted as false)
    permutations(n, 0, buffer, used);

    return 0;
}

