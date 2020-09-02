#include <iostream>
#include <array>

const int MAX_ARRAY_SIZE = 100000;

void merge_sort(double *array, int16_t array_size)
{
    if (array_size <= 1) return;  // base case. Critical to implement it!!!
        
    int16_t middle = array_size / 2;
    double *left = array;
    double *right = array + middle;
    // BEWARE! Using address arithmetics: pointer + number gives shifted array begin
    int16_t left_size = middle;
    int16_t right_size = array_size - left_size;

    // recursion goes here:
    merge_sort(left, left_size);
    merge_sort(right, right_size);
    
    // Merge these two already sorted parts of array:
    double *buffer = new double[array_size];
    int16_t left_i = 0;
    int16_t right_i = 0;
    int16_t buffer_i = 0;
    while (left_i < left_size and right_i < right_size) {
        if (left[left_i] <= right[right_i]) {
            // taking the lesser from the left part of array
            buffer[buffer_i] = left[left_i];
            left_i += 1;
            buffer_i += 1;
        } else {
            // taking the lesser from the right part of array
            buffer[buffer_i] = right[right_i];
            right_i += 1;
            buffer_i += 1;
        }
    }
    while (left_i < left_size) { // copying left elements from the left size (if there is left something)
        buffer[buffer_i] = left[left_i];
        left_i += 1;
        buffer_i += 1;
    }
    while (right_i < right_size) { // copying right elements from the right size (if there is right something)
        buffer[buffer_i] = right[right_i];
        right_i += 1;
        buffer_i += 1;
    }
    
    // copying from buffer to original array:
    for(int16_t i = 0; i < array_size; i++) {
        array[i] = buffer[i];
    }
    delete[] buffer;
}

void input_array(double *array, int16_t n)
{
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
}

void print_array(double *array, int16_t n)
{
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    int16_t array_size;
    std::cout << "Enter size of array: ";
    std::cin >> array_size;
    if (array_size <= 0 or array_size > MAX_ARRAY_SIZE) {
        std::cerr << "Your array size is unacceptable!\n";
        return 1;
    }
    double *array = new double[array_size];
    
    input_array(array, array_size);
    merge_sort(array, array_size);
    print_array(array, array_size);

    delete[] array;

    return 0;
}
