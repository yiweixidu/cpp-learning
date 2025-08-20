// 打印素数（1-100）方案1
#include <iostream>
using namespace std;

int main() {
    for (int num = 2; num <= 100; num++) {
        bool isPrime = true;
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << num << " ";
    }
    cout << endl;
    return 0;
}