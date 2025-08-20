//判断闰年方案5，查表法（预计算1900-2100年的闰年信息）
#include <iostream>
#include <array>
using namespace std;

//预计算1900-2100年的闰年信息
constexpr array<bool, 201> 
generateLeapMap() {
    array<bool, 201> result{};
    for (int i = 0; i < 201; i++) {
        int year = 1900 + i;
        result[i] = (year % 4 ==0) && (year % 100 != 0 || year % 400 == 0);
    }
    return result;
}

constexpr auto leapMap = generateLeapMap();

int main() {
    int year;
    cout << "输入年份：";
    cin >> year;

    //修复后的闰年判断逻辑
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "闰年";
    } else {
        cout << "平年";
    }

    cout << endl;

    //使用预计算的闰年信息
    int index = year - 1900;
    if (index >= 0 && index <= 200) {
        cout << "预计算验证： " << (leapMap[index] ? "闰年" : "平年") << endl;
    } else {
        cout << "年份超出预计算范围(1900-2100)";
    }

    return 0;
}