//数组最大值最小值，方案2 STL算法
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7, 4, 8, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    auto minIt = min_element(arr, arr + n);
    auto maxIt = max_element(arr, arr + n);
    
    cout << "最小值: " << *minIt << "\n最大值: " << *maxIt << endl;
    return 0;
}