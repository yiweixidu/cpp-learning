//数组最大值最小值，方案3 模板函数泛型
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void findMinMax(const T arr[], int size, T& minVal, T& maxVal) {
    if (size == 0) return;
    
    minVal = maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        else if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    double arr[] = {5.5, 2.2, 9.9, 1.1, 7.7, 4.4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    double minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);
    
    cout << "最小值: " << minVal << "\n最大值: " << maxVal << endl;
    return 0;
}