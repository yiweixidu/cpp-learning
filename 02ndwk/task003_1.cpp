//数组最大值最小值，方案1
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = INT_MIN;
    int min = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    cout << "最大值: " << max << "\n最小值: " << min;
    return 0;
}