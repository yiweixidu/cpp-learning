//判断闰年方案6，编译期计算-2
#include <iostream>
#include <string_view>
using namespace std;

// 编译期字符串视图
consteval string_view leapYearResult(int year) {
    if (year <= 0) return "无效年份";
    
    if (year % 400 == 0) return "闰年";
    if (year % 100 == 0) return "平年";
    if (year % 4 == 0) return "闰年";
    return "平年";
}

int main() {
    // 编译期确定的年份
    constexpr int year = 2024;
    cout << year << "年是: " << leapYearResult(year) << endl;
    
    // 运行时输入版本
    int inputYear;
    cout << "请输入年份: ";
    cin >> inputYear;
    
    // 使用普通函数进行运行时判断
    auto isLeapYear = [](int y) -> string_view {
        if (y <= 0) return "无效年份";
        if (y % 400 == 0) return "闰年";
        if (y % 100 == 0) return "平年";
        if (y % 4 == 0) return "闰年";
        return "平年";
    };
    
    cout << inputYear << "年是: " << isLeapYear(inputYear);
    
    return 0;
}