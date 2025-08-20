//数组最大值最小值，方案5 SIMD向量化优化
#include <iostream>
#include <immintrin.h> // AVX指令集
using namespace std;

void findMinMaxSIMD(const int arr[], int n, int& minVal, int& maxVal) {
    if (n == 0) return;
    
    __m128i minVec = _mm_set1_epi32(arr[0]);
    __m128i maxVec = _mm_set1_epi32(arr[0]);
    
    int i;
    for (i = 0; i + 3 < n; i += 4) {
        __m128i data = _mm_loadu_si128((__m128i*)&arr[i]);
        minVec = _mm_min_epi32(minVec, data);
        maxVec = _mm_max_epi32(maxVec, data);
    }
    
    // 提取SIMD寄存器中的结果
    int minTemp[4], maxTemp[4];
    _mm_storeu_si128((__m128i*)minTemp, minVec);
    _mm_storeu_si128((__m128i*)maxTemp, maxVec);
    
    minVal = min(min(minTemp[0], minTemp[1]), min(minTemp[2], minTemp[3]));
    maxVal = max(max(maxTemp[0], maxTemp[1]), max(maxTemp[2], maxTemp[3]));
    
    // 处理剩余元素
    for (; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 4, 8, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minVal, maxVal;
    findMinMaxSIMD(arr, n, minVal, maxVal);
    
    cout << "最小值: " << minVal << "\n最大值: " << maxVal << endl;
    return 0;
}