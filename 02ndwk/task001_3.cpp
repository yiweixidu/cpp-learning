//判断闰年方案3，逻辑表达式简化
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "输入年份：";
    cin >> year;
    bool isLeap = (year % 4 == 0) && (year % 100 != 0 || year % 400 ==0);
    cout << (isLeap ? "闰年" : "平年") << endl;
    return 0;
}