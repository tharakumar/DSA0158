#include <iostream>
using namespace std;
int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }
    return count;
}
int main() {
    int array[] = {1, 2, 3, 4, 2, 2, 5, 2};
    int value_to_find = 2;
    int size = sizeof(array) / sizeof(array[0]);
    int occurrences = countOccurrences(array, size, value_to_find);
    cout << "The value " << value_to_find << " occurs " << occurrences << " times in the array." <<endl;
    return 0;
}