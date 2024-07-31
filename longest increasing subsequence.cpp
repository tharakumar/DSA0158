#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> longestIncreasingSubsequence(const std::vector<int>& arr) {
    if (arr.empty()) return {};
    int n = arr.size();
    std::vector<int> lis(n, 1); 
    std::vector<int> prev(n, -1);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
                prev[i] = j;
            }
        }
    }
    int maxLength = 0, maxIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (lis[i] > maxLength) {
            maxLength = lis[i];
            maxIndex = i;
        }
    }
    std::vector<int> result;
    for (int i = maxIndex; i >= 0; i = prev[i]) {
        result.push_back(arr[i]);
        if (prev[i] == -1) break;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
int main() {
    std::vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    std::vector<int> lis = longestIncreasingSubsequence(arr);
    std::cout << "The longest increasing subsequence is: ";
    for (int i : lis) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}