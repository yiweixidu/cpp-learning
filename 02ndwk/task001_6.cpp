//判断闰年方案6，编译期计算-1
#include <iostream>
using namespace std;

// 编译期闰年判断函数
template<int Year>
constexpr const char* getLeapYearResult() {
    if constexpr (Year > 0) { // 编译期分支
        if constexpr (Year % 400 == 0) return "闰年";
        else if constexpr (Year % 100 == 0) return "平年";
        else if constexpr (Year % 4 == 0) return "闰年";
        else return "平年";
    } else {
        return "无效年份";
    }
}

int main() {
    // 编译期确定的年份
    constexpr int year = 2024;
    
    // 编译期计算并输出结果
    cout << year << "年是: " << getLeapYearResult<year>() << endl;
    
    // 运行时输入版本（不能使用if constexpr）
    int inputYear;
    cout << "请输入年份: ";
    cin >> inputYear;
    
    // 运行时判断
    if (inputYear > 0) {
        auto result = [](int y) {
            if (y % 400 == 0) return "闰年";
            if (y % 100 == 0) return "平年";
            if (y % 4 == 0) return "闰年";
            return "平年";
        }(inputYear);
        cout << inputYear << "年是: " << result;
    } else {
        cout << "无效年份";
    }
    
    return 0;
}