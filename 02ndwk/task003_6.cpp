//数组最大值最小值，方案6 递归分治算法
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> findMinMaxRecursive(const int arr[], int left, int right) {
    if (left == right) {
        return {arr[left], arr[left]};
    }
    
    if (right - left == 1) {
        return {min(arr[left], arr[right]), max(arr[left], arr[right])};
    }
    
    int mid = left + (right - left) / 2;
    auto leftResult = findMinMaxRecursive(arr, left, mid);
    auto rightResult = findMinMaxRecursive(arr, mid + 1, right);
    
    return {
        min(leftResult.first, rightResult.first),
        max(leftResult.second, rightResult.second)
    };
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 4, 8, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    auto result = findMinMaxRecursive(arr, 0, n - 1);
    
    cout << "最小值: " << result.first << "\n最大值: " << result.second << endl;
    return 0;
}