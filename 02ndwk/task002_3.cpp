// 打印素数（1-100）方案3，埃拉托色尼筛法
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int N = 100;
    bool isPrime[N + 1] = {false};
    
    // 初始化2~100为true
    fill_n(isPrime + 2, N - 1, true);

    // 埃拉托色尼筛法
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // 打印素数
    cout << "1-100之间的素数: ";
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}