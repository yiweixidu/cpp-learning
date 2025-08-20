//判断闰年方案4，函数封装与常量
#include <iostream>
using namespace std;
constexpr bool isLeapYear (int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int year;

    //获取用户输入
    cout << "输入年份：";
    cin >> year;

    //验证输入有效性
    if (cin.fail()||year <=0){
        cerr << "错误：请输入有效的正整数年份！" << endl;
        return 1;
    }

    //调用isLeapYear函数并输出结果
    if (isLeapYear(year)) {
        cout << year << "年是闰年" << endl;
    } else {
        cout << year << "年是平年" << endl;
    }

    //额外功能：显示前后几年的闰年情况
    cout << "\n前后几年的闰年情况: " << endl;
    for (int i = year-2; i <= year+2; i++) {
        if (i > 0){ //确保年份有效
            cout << i << "年：" << (isLeapYear(i) ? "闰年" : "平年") << endl;
        }
    }
    return 0;
}