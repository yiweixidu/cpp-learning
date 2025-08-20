// 打印素数（1-100）方案4，6k+-1优化
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "1-100之间的素数: ";
    
    // 单独处理前几个素数
    cout << "2 3 ";
    
    for (int num = 5; num <= 100; num++) {
        if (num % 2 == 0 || num % 3 == 0) {
            continue; // 跳过偶数和3的倍数
        }
        
        bool isPrime = true;
        // 6k±1优化：只需要检查6的倍数前后的数
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}