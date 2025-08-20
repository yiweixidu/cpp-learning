// 打印素数（1-100）方案2，平方根优化，跳过偶数优化
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "1-100之间的素数: ";
    cout << "2 ";//单独处理2
    for (int num = 3; num <= 100; num+= 2) {//只查奇数
        bool isPrime = true;
        
        for (int i = 3; i * i <= num; i+= 2) {
            if (num % i == 0) {
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