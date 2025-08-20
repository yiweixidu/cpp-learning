//判断闰年方案2，更简洁的写法
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "输入年份：";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)) {
                cout << "闰年" << endl;
            } else {
                cout << "平年" << endl;
            }
    return 0;
}