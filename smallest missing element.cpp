#include <iostream>

int findSmallestMissing(int arr[], int size) {
    int missing = 0; 
    int i = 0; 
    while (i < size && arr[i] == missing) {
        missing++;
        i++;
    }
    return missing;
}
int main() {
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissing(arr, size);
    std::cout << "The smallest missing element is " << smallestMissing ;
    return 0;
}