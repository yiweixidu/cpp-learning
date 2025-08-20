//数组最大值最小值，方案4 多线程并行查找
#include <iostream>
#include <thread>
#include <future>
#include <vector>
#include <algorithm>
using namespace std;

void findMinMaxParallel(const vector<int>& arr, int& minVal, int& maxVal) {
    int mid = arr.size() / 2;
    
    auto futureMin1 = async(launch::async, [&] {
        return *min_element(arr.begin(), arr.begin() + mid);
    });
    
    auto futureMax1 = async(launch::async, [&] {
        return *max_element(arr.begin(), arr.begin() + mid);
    });
    
    auto futureMin2 = async(launch::async, [&] {
        return *min_element(arr.begin() + mid, arr.end());
    });
    
    auto futureMax2 = async(launch::async, [&] {
        return *max_element(arr.begin() + mid, arr.end());
    });
    
    minVal = min(futureMin1.get(), futureMin2.get());
    maxVal = max(futureMax1.get(), futureMax2.get());
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10};
    
    int minVal, maxVal;
    findMinMaxParallel(arr, minVal, maxVal);
    
    cout << "最小值: " << minVal << "\n最大值: " << maxVal << endl;
    return 0;
}