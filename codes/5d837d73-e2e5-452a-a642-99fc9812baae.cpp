#include <iostream>

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    bool sorted = isSorted(arr, size);

    if (sorted) {
        std::cout << "The array is sorted.\n";
    } else {
        std::cout << "The array is not sorted.\n";
    }

    delete[] arr;
    return 0;
}
