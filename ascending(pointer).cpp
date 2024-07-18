#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}
int main() {
    const int MAX_SIZE = 100; 
    int *arr = new int[MAX_SIZE];
    int n = 0;
    int input;
    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> input;
        if (input == -1) break;
        *(arr + n) = input;
        n++;
    }
    bubbleSort(arr, n);
    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << endl;
    }
    delete[] arr;
    return 0;
}