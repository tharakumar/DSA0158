#include <iostream>
#include <algorithm>
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void printArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int intArr[] = {5, 2, 9, 1, 5, 6};
    double doubleArr[] = {3.4, 2.1, 5.6, 1.1, 4.2};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    std::cout << "Original integer array: ";
    printArray(intArr, intSize);
    std::cout << "Original double array: ";
    printArray(doubleArr, doubleSize);
    sortArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);
    std::cout << "Sorted integer array: ";
    printArray(intArr, intSize);
    std::cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);
    return 0;
}