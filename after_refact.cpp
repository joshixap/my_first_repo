#include <cmath>
#include <iostream>

void generate_array(int* const arr, const int size_arr);
void print_array(const int* const arr, const int size_arr);
double calculate_average_val(const int* const arr, const int size_arr);

int main() {
    const int arrs_count = 3;

    for (int i = 0; i != arrs_count; ++i) {
        const int arr_size = 10;
        int arr[arr_size];

        generate_array(arr, arr_size);

        std::cout << i + 1 << -ая последовательность:  << std::endl;
        print_array(arr, arr_size);

        std::cout << Среднее значение: 
                  << calculate_average_val(arr, arr_size)
                  << std::endl;
    }

    return 0;
}

void generate_array(int* const arr, const int size_arr) {
    for (int i = 0; i != size_arr; ++i) {
        arr[i] = rand() % size_arr;
    }
}

void print_array(const int* arr, const int size_arr) {
    const char gap = ' ';
    for (int i = 0; i != size_arr; ++i) {
        std::cout << arr[i] << gap;
    }
    std::cout << std::endl;
}

double calculate_average_val(const int* arr, const int size_arr) {
    int sum = 0;
    for (int i = 0; i != size_arr; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size_arr;
}
