// 打印素数（1-100）方案5，并行计算
#include <execution>
#include <vector>

vector<int> numbers(99);
iota(numbers.begin(), numbers.end(), 2);

vector<bool> primes(99, true);

for_each(execution::par, numbers.begin(), numbers.end(), [&](int num) {
    if (num > sqrt(100)) return;
    if (primes[num-2]) {
        for (int j = num*num; j <= 100; j += num) {
            primes[j-2] = false;
        }
    }
});

// 打印结果
for (int i = 0; i < 99; i++) {
    if (primes[i]) cout << i+2 << " ";
}